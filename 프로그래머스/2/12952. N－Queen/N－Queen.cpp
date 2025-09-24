#include <string>
#include <vector>

using namespace std;
void dfs(int n, int c, vector<int>& pos, vector<int>& usedRow, int& ans) {
    if (c > n) {
        ++ans;
        return;
    }
    for (int r = 1; r <= n; ++r) {
        if (usedRow[r]) continue;   

        if (c > 1 && abs(r - pos[c-1]) < 2) continue;

        bool ok = true;
        for (int prev = 1; prev < c; ++prev) {
            if (abs(r - pos[prev]) == (c - prev)) { ok = false; break; }
        }
        if (!ok) continue;

        pos[c] = r;
        usedRow[r] = 1;
        dfs(n, c + 1, pos, usedRow, ans);
        usedRow[r] = 0;
    }
}
int solution(int n) {
    vector<int> pos(n + 1, 0), usedRow(n + 1, 0); 
    int ans = 0;
    dfs(n, 1, pos, usedRow, ans);
    return ans;
}