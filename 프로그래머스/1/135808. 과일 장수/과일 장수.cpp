#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    // 1점부터 k점까지의 사과, 한 상자에 m개씩, 한 상자 가격 p*m
    int applebox = score.size() / m ; //팔수있는 사과 박스 수
    int answer = 0; //이익
    sort(score.begin(), score.end(), greater<int>()); //내림차순
    for (int i = 0 ; i < applebox; i++) { //박스 수
        int small = score [m*(i+1)-1];//만약 m이 3이면 2,5,8...
        answer += small * m;
    }
    return answer;
}