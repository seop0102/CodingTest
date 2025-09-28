#include <string>
#include <vector>

using namespace std;

static void dfs(int u , const vector<vector<int>>& g, vector<int>& visited, int n) {
    visited[u] = 1;
    for (int v = 0 ; v<n ; ++v) {
        if (g[u][v] ==1 && !visited[v]) {
            dfs(v,g,visited,n);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<int> visited(n,0);
    for (int i = 0 ; i < n ; ++ i ) {
        if ( !visited[i]) {
            dfs(i,computers,visited,n);
            ++answer;
        }
    }
    return answer;
}