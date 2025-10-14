#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    
    vector<vector<bool>> win(n+1, vector<bool>(n+1,false));
    for (const auto& r : results) {
        int a = r[0], b = r[1];
        win[a][b] = true;
    }
    for (int k = 1; k<= n ;++k) {
        for (int i = 1; i<=n ; ++i) {
            if (!win[i][k]) continue;
            for (int j = 1; j<= n ; ++j) {
                if (win[k][j] ) win[i][j] = true;
            }
        }
    }
    
    int answer = 0;
    
    for (int i = 1 ; i<=n ; ++i) {
        int x = 0;
        for (int j =1 ; j<= n ; ++j) {
            if (i == j) continue;
            if (win[i][j] || win[j][i]) ++x;
        }
        if (x == n-1) ++answer;
    }
    return answer;
}