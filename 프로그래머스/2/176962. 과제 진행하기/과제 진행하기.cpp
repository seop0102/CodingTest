#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

static int toMin(const string& t) {
    int h = stoi(t.substr(0,2));
    int m=stoi(t.substr(3,2));
    return h*60 +m;
    
}

vector<string> solution(vector<vector<string>> plans) {
    //과제를 담는 구조체 (이름, 시작시간, 필요시간) > 분으로 환산
    struct Task {string name ; int start ; int play ;};
    
    vector<Task> A;
    for (auto& p : plans) {
        A.push_back(Task{ p[0], toMin(p[1]), stoi(p[2]) });
    }
    
    //정렬 ->가장 먼저 시작하는 과제부터 
    sort (A.begin(), A.end(), [](const Task& a, const Task& b) {
        return a.start < b.start;
    });
    
    vector <string> answer;
    answer.reserve(A.size());
    
    //멈춰둔 과제 스택
    stack<pair<string,int>> paused;
    
    //i번 과제를 시작해서 i+1번 과제 시작 전까지 처리
    for (int i = 0; i+1 < A.size(); ++i) {
        int nowStart = A[i].start; //현재 과제 시작 시각
        int nowNeed= A[i].play; // 현재 과제 총 필요시간
        int nextStart=A[i+1].start; // 다음 과제 시작 시각
        int avail = nextStart - nowStart; //다음 과제 시작까지 남은 빈 시간
        
        // 현재 과제를 avail안에 완료 가능
        if (nowNeed <= avail) {
            answer.push_back(A[i].name);
            int remain = avail- nowNeed;
            //남은 시간이 있음 + 멈춘 과제가 있다면 위에서부터 이어서 진행
            while (remain > 0 && !paused.empty()) {
                auto [nm, left] = paused.top();
                if (left <= remain) {
                    //끝낼 수 있으면 
                    paused.pop();
                    remain -= left;
                    answer.push_back(nm);
                } else {
                    //못끝내면 일부만 진행하고 남은 시간 업데이트
                    left -= remain;
                    paused.top().second = left;
                    paused.top(). second = left;
                    remain = 0;
                }
            }
        } else {
            // avail안에 완료 불가 ->남은 시간만큼 스택에 멈춤으로 저장하기
            int left = nowNeed - avail;
            paused.push({A[i].name, left});
        }
    }
    //마지막 과제는 쭉 진행
    answer.push_back(A.back().name);
    //멈춘 과제가 있다면 LIFO순으로 마무리
    while (!paused.empty()) {
        answer.push_back(paused.top().first);
        paused.pop();
    } return answer;
}