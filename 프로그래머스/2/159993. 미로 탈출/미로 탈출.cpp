#include <string>
#include <vector>
#include <queue>

using namespace std;

static int dr[4] = {-1,1,0,0};
static int dc[4] = {0,0,-1,1};

int bfs(const vector<string>& maps, pair<int,int> start, pair<int,int> exit) {
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> distance (n, vector<int>(m,-1));
    queue<pair<int,int>> q;
    
    distance[start.first][start.second] = 0;
    q.push(start);
    
    while (!q.empty()) {
        auto[r,c] = q.front(); 
        q.pop();
        if (r==exit.first && c== exit.second) {
            return distance[r][c];
        }
        for (int k = 0 ; k<4; ++k) {
            int nr = r+dr[k], nc= c+dc[k];
            if (nr <0 || nr >= n || nc<0 || nc>=m ) continue;
            if (maps[nr][nc] == 'X') continue;
            if (distance[nr][nc] != -1) continue;
            distance[nr][nc] = distance[r][c]+1;
            q.push({nr,nc});
        }
    }
    return -1;
    
}

int solution(vector<string> maps) {
    int row = maps.size();
    int col = maps[0].size();
    
    pair<int,int> S{-1,-1}, L{-1,-1}, E{-1,-1};
    
    for (int r =0; r< row ; ++r) {
        for (int c =0; c<col ; ++c) {
            if (maps[r][c] == 'S') S={r,c};
            else if (maps[r][c]=='L') L={r,c};
            else if (maps[r][c]=='E') E={r,c};
        }
    }
    
    int SL = bfs(maps, S,L);
    if (SL == -1) return -1;
    
    int LE = bfs(maps,L,E);
    if (LE == -1 ) return -1;
    
    return SL+LE;
}