// 광물들을 앞에서부터 5개씩 묶음으로 나누고 각 그룹에 어떤 곡괭이를 쓸 지 DFS로 전부 시도해보기

#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// 곡괭이 힘 : 다이아=25, 철=5, 돌=1
static const int Pick_Power[3] = {25, 5, 1};
int answer; // 최소 피로도

// groupIdx번째(앞에서부터 5개씩) 묶음을 pickType 곡괭이로 캘 때 피로도
int costOfGroup(int groupIdx, int pickType, const vector<int>& mines)
{
    int power = Pick_Power[pickType];
    int start = groupIdx * 5;
    int end   = min(start + 5, (int)mines.size());
    int tired = 0;

    // 피로도 = (광물값 / 곡괭이힘)의 몫, 단 몫이 0이면 1
    for (int i = start; i < end; ++i) {
        int q = mines[i] / power;
        tired += (q == 0 ? 1 : q);
    }
    return tired;
}

// DFS: groupIdx=몇 번째 묶음, current=누적 피로도, 남은 곡괭이 수들, 광물배열
void dfs(int groupIdx, int current, int pDia, int pIron, int pStone, const vector<int>& mines) {
    // 더 캘 묶음이 없거나 곡괭이가 없으면 종료
    if (groupIdx * 5 >= mines.size() || (pDia + pIron + pStone) == 0) {
        answer = min(answer, current);
        return;
    }

    // 다이아 곡괭이
    if (pDia > 0) {
        int cost = costOfGroup(groupIdx, 0, mines);
        dfs(groupIdx + 1, current + cost, pDia - 1, pIron, pStone, mines);
    }
    // 철 곡괭이
    if (pIron > 0) {
        int cost = costOfGroup(groupIdx, 1, mines);
        dfs(groupIdx + 1, current + cost, pDia, pIron - 1, pStone, mines);
    }
    // 돌 곡괭이
    if (pStone > 0) {
        int cost = costOfGroup(groupIdx, 2, mines);
        dfs(groupIdx + 1, current + cost, pDia, pIron, pStone - 1, mines);
    }
}

int solution(vector<int> picks, vector<string> minerals) {
    // 문자열 → 숫자(다이아=25, 철=5, 돌=1)
    vector<int> mines;
    
    for (auto m : minerals) {
        if (m[0] == 'd') mines.push_back(25);
        else if (m[0] == 'i') mines.push_back(5);
        else mines.push_back(1);
    }

    answer = INT_MAX;
    dfs(0, 0, picks[0], picks[1], picks[2], mines);
    return answer;
}
