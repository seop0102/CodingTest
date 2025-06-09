#include <string>

using namespace std;

int solution(string s) {
    string words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = 0; i<10; i++) {
        while ( s.find(words[i]) != string::npos) {
            //s.replace(pos, 길이, 바꿀 문자열) 사용
            s.replace(s.find(words[i]), words[i].length(), to_string(i));        }
    }
    int answer = stoi(s);
    return answer;
}