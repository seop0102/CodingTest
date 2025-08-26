#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

//BFS(큐)로 푸는 문제
vector<int> solution(vector<string> maps) {
    vector<int> answer;
    int x = maps.size();
    int y = maps[0].length();
    
    vector<vector<bool>> visited(x,vector<bool>(y,false));
    int di[4] = {-1,1,0,0};
    int dj[4] = {0,0,-1,1};
    
    for (int i = 0 ; i < x ; ++i) {
        for (int j = 0 ; j<y; ++j) {
            if (maps[i][j] == 'X') {
                continue;
            } 
            if (visited[i][j] == true) {
                continue;
            }
            int sum = 0;
            queue<pair<int,int>> q;
            q.push(make_pair(i,j));
            visited[i][j]=true;
            
            while (!q.empty()) {
                pair<int,int> p = q.front();
                q.pop();
                
                int a = p.first;
                int b = p.second;
                
                sum += (maps[a][b] - '0');
                
                for (int k = 0; k<4; k++){
                    int c = a + di[k];
                    int d = b + dj[k];
                    
                    if (c < 0 || c >= x || d < 0 || d >= y) {
                        continue;
                    }
                    if (maps[c][d] == 'X') {
                        continue;
                    }
                    if (visited[c][d] == true){
                        continue;
                    } 
                    
                    visited[c][d] = true;
                    q.push(make_pair(c,d));
                    
                }
            }
            answer.push_back(sum);
        }
    }
    if (answer.empty()) {
        answer.push_back(-1);
    } else {
        sort(answer.begin(), answer.end());
    }
    return answer;
}