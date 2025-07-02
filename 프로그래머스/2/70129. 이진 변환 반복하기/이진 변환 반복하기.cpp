#include <string>
#include <vector>
#include <bitset> //2진법 변환
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int num = 0; // 제거할 0의 갯수
    int time = 0; // 회차
    while (s != "1") {
        string str ="";
        for (char c : s) {
            if (c == '1') {
                str += c;
            } else {
                num ++;
            }
        }
        int len = str.length();
        bitset<32> b(len); //2진법 변환
        string bin = b.to_string();
        s = bin.substr(bin.find('1'));
        time ++;
    }
    answer.push_back(time);
    answer.push_back(num);
    return answer;
}