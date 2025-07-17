#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<pair<int,int>> q; //현재까지 합, 인덱스 넘버
    q.push({0,0});
    while (!q.empty()) { //큐에 노드가 있으면 반복
        int sum = q.front().first;
        int index = q.front().second;
        q.pop();

        // 모든 숫자를 다 사용했는지 확인
        if (index == numbers.size()) {
            if (sum == target) answer++;
        } else {
            // 다음 숫자를 더한 경우
            q.push({sum + numbers[index], index + 1});
            // 다음 숫자를 뺀 경우
            q.push({sum - numbers[index], index + 1});
        }
    }
    return answer;
}