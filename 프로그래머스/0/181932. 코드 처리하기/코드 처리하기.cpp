#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool bMode = false;
    int num = 0;
    for (int i = 0 ; i < code.length(); i++) {
        char x = code[i];
        if ( x == '1') bMode = !bMode;
        else {
            if (!bMode && i%2 == 0) answer += x;
            else if (bMode && i%2 == 1) answer += x;
        }
    }
    
    if ( answer.length() == 0) {
        answer = "EMPTY";
    }
    return answer;
}