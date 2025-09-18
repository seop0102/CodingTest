#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cards) {
    int n = cards.size();
    vector<int> groupLens;
    vector<bool> visited(n+1, false);
    
    for (int start = 1; start<=n; ++start) {
        if (visited[start]) continue;
        
        int cur = start;
        int cnt = 0;
        while (!visited[cur]) {
            visited[cur] = true;
            cnt ++;
            cur = cards[cur-1];
        }
        groupLens.push_back(cnt);
    }
    if (groupLens.size() < 2) return 0;
    sort (groupLens.rbegin(), groupLens.rend());
    return groupLens[0] * groupLens[1];
}