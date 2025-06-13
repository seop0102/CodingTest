#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int correct = 0; // 맞은갯수
    int zero = 0; //0의 갯수
    for (int i = 0 ; i<6; i++) {
        if ( lottos[i] == 0) zero++;
        for (int j = 0 ; j<6 ; j++) {
            if ( lottos[i] == win_nums[j]) correct++;
        }
    }
    int a,b=0; //최고 순위, 최저 순위
    vector<int> answer;
    if (zero == 0 ) { //0이 0개일때 (하나도 안지워짐)
        if (correct == 0) {
            a=6;
            b=6;
        }
        else { //0이 하나도 없고 맞은건 조금 있음
            a = 7-correct;
            b = 7-correct;
        }
    }
    else { //0이 있음 ( 지워짐 )
        if (correct == 0) { //0이 있지만 맞는게 없을때 
            a=7-zero;
            b=6;
        }
        else { //0도 있고 맞는것도 있음
            a= 7-correct-zero;
            b= 7-correct;
        }
    }
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}