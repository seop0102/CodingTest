#include <vector>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int len = number.size();
    for (int i = 0 ; i<len-2 ; i++) {
        for (int j = i+1 ; j<len-1; j++) {
            for (int k = j+1; k<len; k++){
                int x = number[i]+number[j]+number[k];
                if ( x == 0 ) {
                    answer ++;
                }
            }
        }
    }
    return answer;
}