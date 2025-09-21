#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<string> board) {
    int n = board.size();
    int m = board[0].size();
    
    pair<int,int> S{-1,-1}, T{-1,-1};
    for (int r = 0 ; r<n ; ++r ){
        for (int c = 0 ; c<m; ++c) {
            if (board[r][c] == 'R') S={r,c};
            else if (board[r][c] == 'G') T ={r,c};
        }
    }
    if (S==T) return 0;
    
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;
    
    dist[S.first][S.second] = 0;
    q.push(S);
    
    const int dr[4] = {-1, 1, 0, 0};
    const int dc[4] = {0, 0, -1, 1};
    
    auto inb = [&](int r, int c){
        return (0 <= r && r < n && 0 <= c && c < m);
    };
    
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        if (r == T.first && c == T.second) return dist[r][c];

        for (int d = 0; d < 4; ++d) {
            int nr = r, nc = c;
            while (true) {
                int tr = nr + dr[d];
                int tc = nc + dc[d];
                if (!inb(tr, tc)) break;        
                if (board[tr][tc] == 'D') break; 
                nr = tr; nc = tc;                
            }
            if (nr == r && nc == c) continue;

            if (dist[nr][nc] == -1) {
                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
    return -1;
}