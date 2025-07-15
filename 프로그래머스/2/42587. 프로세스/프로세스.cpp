#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    //큐 초기화함. 우선순위,원래 인덱스로 설정
    for (int i = 0 ; i < priorities.size(); ++i) {
        q.push({priorities[i], i});
    }
    while (!q.empty()) { //큐가 빌 때까지 반복
        pair<int,int> current = q.front(); //앞에서 하나 꺼냄
        q.pop(); //하나 pop
        //더 높은 프라이어티 있는지 확인
        bool hasHigherPriority = false;
        queue<pair<int,int>> temp = q;
        while (!temp.empty()) {
            if(temp.front().first > current.first) {
                hasHigherPriority = true;
                break;
            }
            temp.pop();
        }
        if (hasHigherPriority == true) {
            q.push(current); //더 높은 프라이어티 -> 큐 뒤로
        } else {//없으면
            answer++; // 
            if ( current.second == location ){
                return answer;
            }
        }
    }
    return answer;
}