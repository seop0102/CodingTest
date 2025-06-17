#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i=0 ;
    while ( i < s.length())  {
        char x = s[i];
        int same = 1;
        int different = 0;
        int j;
        for (j = i+1 ; j<s.length() ; j++) {
            if (s[j] == x ) {
                same ++;
            } else {
                different ++;
            }
            if ( same == different) {
                j++;
                break;
                
            }
        }
        answer ++;
        i = j;
        
    }
    return answer;
}