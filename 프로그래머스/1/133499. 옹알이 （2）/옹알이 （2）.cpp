#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> word = {"aya", "ye", "woo", "ma"};
    vector<string> noword = {"ayaaya","yeye","woowoo", "mama"};
    vector<string> arr;
    
    for (int i = 0 ; i < babbling.size(); i++) {
        string str = babbling[i];
        bool isnoword = false;
        //noword있는지 검사
        for (int j = 0 ; j < 4 ; j++ ){
            if (str.find(noword[j])  !=  string::npos ) { 
                isnoword = true; //연속된 단어 있음
                break;
            }
        }
        if (isnoword==true) {
            continue; //연속된 발음 있는 단어들은 무시함
        }
        string temp = str;
        while(!temp.empty()) { //안비어있으면 계속 반복
            bool matched = false; //temp 맨 앞에 word 단어 있는지 확인
            for (int k = 0; k< 4; k++) {
                if (temp.find(word[k]) == 0 ) {
                    temp.erase(0,word[k].length());
                    matched= true;
                    break;
                }
            }
            if (matched==false) { //word단어로 시작하는 단어가 없을때
                break;
            }
        }
        if (temp == "") { //빈 문자열이면 답에 추가
            answer++;
        }
    }
        return answer;
}