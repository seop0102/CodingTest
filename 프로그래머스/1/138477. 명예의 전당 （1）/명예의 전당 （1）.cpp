#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer; //작은 것만 넣는 앤써 벡터
    vector<int> contest; // 명예의 전당 벡터
    
    k = min(k, (int)score.size());


    
    for (int i = 0; i < k ; i++) {
        contest.push_back(score[i]); //명예의 전당에 추가
        sort(contest.begin(), contest.end()); //정렬
        answer.push_back(contest[0]); //맨 앞(제일 작은 값) 앤써에 저장
    }
    if ( k >= score.size() ) {
        return answer;
    } 
     // 구현 할 것 : 이제 명예의 전당이 꽉 참. K번째 인덱스의 넣을 수랑 제일 작은 수랑 비교해서 크면 명예의 전당에 넣음. 넣고 다시 정렬 후 작은거를 answer에 / 작으면 그냥 안넣고 제일 작은 수를 answer에 넣음
    for ( int j = k ; j<score.size(); j++) {
        if ( score[j] >= contest[0] ) { //새로넣을 수랑 제일 작은 수 비교
            //contest [0] = score[j]로 바꾸기
            contest[0] = score[j];
            //그러고 정렬
            sort(contest.begin(), contest.end());
            //맨 앞의 값 다시 answer.push_back();
        } answer.push_back(contest[0]);
    }     
    return answer;
}