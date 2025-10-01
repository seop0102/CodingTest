#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> answer;
vector<bool> used;
bool found = false;

void dfs(const vector<vector<string>>& tickets, vector<string>& path, int usedCount) {
    if (found) return; // 이미 답 찾았으면 중단
    if (usedCount == tickets.size()) {
        answer = path; // 모든 티켓 사용 완료 → 답 확정
        found = true;
        return;
    }

    string cur = path.back();
    for (int i = 0; i < tickets.size(); i++) {
        if (!used[i] && tickets[i][0] == cur) {
            used[i] = true;
            path.push_back(tickets[i][1]);
            dfs(tickets, path, usedCount + 1);
            path.pop_back();
            used[i] = false;
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    used.assign(tickets.size(), false);
    vector<string> path;
    path.push_back("ICN");
    dfs(tickets, path, 0);
    return answer;
}
