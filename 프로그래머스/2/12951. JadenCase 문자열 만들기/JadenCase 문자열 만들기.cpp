#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer =s;
    int num = 0; //공백 만나면 다시 0으로
    
    for (int i = 0 ; i < s.length(); i++ ){
        if ( answer[i] == ' ' ) {
            num = 0 ; //num 다시 초기화
        }else {
            if ( num == 0 ) {
                if(isalpha(answer[i])) {
                    answer[i] = toupper(answer[i]);
                }else {
                    
                }
            } else {
                if (isalpha(answer[i])) {
                    answer[i] = tolower(answer[i]);
                }
            }
            num++;
        }
    }
    return answer;
}