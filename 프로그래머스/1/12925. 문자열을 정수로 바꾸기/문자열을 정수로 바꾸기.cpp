#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<char> str; //s 가 "123"일때
    for ( char c : s) {
        str.push_back(c);
    } //str배열이 {'1','2','3'}이 되고
    string result = "";
    if (str[0] == '-') {//맨앞 - 붙여있을때
        str.erase(str.begin()); //부호 없애기
        for (char c : str) {
            result += c;
        }
        int answer = stoi(result)*(-1);
        return answer;
        }
    else if (str[0] == '+') { //맨앞 +
        str.erase(str.begin()); //부호 없애기
        for ( char c : str ){
            result += c;
        }
    int answer = stoi(result);
    return answer;
    }
    else {
        // 그냥 숫자로 변환하기
        for (char c : str){
             result += c;
        }
    int answer = stoi(result);
    return answer;
    }
}