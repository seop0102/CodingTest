#include <string>
using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') { //대문자이면
            c = ((c - 'A' + n) % 26) + 'A';
            answer += c;
        }
        else if (c >= 'a' && c <= 'z') { //소문자이면
            c = ((c - 'a' + n) % 26) + 'a';
            answer += c;
        }
        else { //알파벳 이외의 다른거
            answer += c;
        }
    }
    return answer;
}
