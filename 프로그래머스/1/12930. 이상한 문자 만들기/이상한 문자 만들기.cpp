#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    int x=0;
    for (int i = 0 ; i < len ; i++) {
        if ( s[i] == ' ') {
            // 공백일때
            answer += ' ';
            x=0;
            }
        else {
            //공백 아닐때
            if ( x%2 ==0){
                answer+= toupper(s[i]);
                
            }else {
                answer += tolower(s[i]);
            }
            x++;
        }
    }
    return answer;
}