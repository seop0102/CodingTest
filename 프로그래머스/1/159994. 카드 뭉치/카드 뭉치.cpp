#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int size = goal.size(); //총 길이
//- cards1과 cards2의 첫 번째 단어부터 시작해서 goal과 비교하면서 진행
    for (int i = 0 ; i < size ; i++) {
        if (goal[i] == cards1[0]){
            cards1.erase(cards1.begin()); //첫번째 원소 제거
            //- goal의 단어가 현재 cards1의 첫 번째 단어와 같다면 cards1에서 하나 빼고 다음으로 이동
            continue;
        }
        else if (goal[i] == cards2[0]) {
            cards2.erase(cards2.begin());
        //- goal의 단어가 현재 cards2의 첫 번째 단어와 같다면 cards2에서 하나 빼고 다음으로 이동
        }
        else {
            return "No";
        //- 두 카드 뭉치에서 가져올 수 없다면 "No"를 반환
        }
        
    }
    return "Yes";
    //- 끝까지 진행해서 goal을 만들 수 있다면 "Yes"를 반환

}