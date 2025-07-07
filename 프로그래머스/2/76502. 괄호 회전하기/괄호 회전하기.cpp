#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    //for 문으로 s의 괄호를 회전함
    for (int i = 0 ; i < s.length() ; i++) {
        string temp = s;
        while (true) { //while문 () {} []가 없을때까지 루프 
            int len = temp.length();
            int pos;
            if((pos = temp.find("()")) != string::npos) {
                temp.erase(pos,2);
            }
            if((pos = temp.find("[]")) != string::npos) {
                temp.erase(pos,2);
            }
            if((pos = temp.find("{}")) != string::npos) {
                temp.erase(pos,2);
            }
            if (len == temp.length()) break;
        }
        if (temp.empty()) { //만약 temp가 "" (비었으면) answer++
            answer++;
        }
        s= s.substr(1) + s[0]; //앞에거 없애고 뒤에 추가 (s길이만큼 반복)
    }
    return answer;
}