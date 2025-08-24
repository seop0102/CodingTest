#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> m(n);
    for (int r = 0; r < n; ++r) {
        m[r].assign(r + 1, 0);
    }
    int di[3] = {1,0,-1};
    int dj[3] = {0,1,-1};
    
    int i = 0, j = 0, d =0;
    int total = n*(n+1) /2;
    
    for (int cnt = 1; cnt <= total; ++cnt) {
        m[i][j] = cnt;

        int ni = i + di[d];
        int nj = j + dj[d];

        if (ni < 0 || ni >= n || nj < 0 || nj > ni || m[ni][nj] != 0) {
            d = (d + 1) % 3;
            ni = i + di[d];
            nj = j + dj[d];
        }
        i = ni;
        j = nj;
    }

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c <= r; ++c) {
            answer.push_back(m[r][c]);
    }
}
    return answer;
}