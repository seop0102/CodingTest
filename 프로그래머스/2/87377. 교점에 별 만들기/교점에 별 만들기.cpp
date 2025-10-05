#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>

using namespace std;

vector<string> solution(vector<vector<int>> line) {
    set<pair<long long , long long >> stars;
    int n = line.size();
    
    for (int i = 0; i< n; ++i) {
        long long A1 = line[i][0], B1=line[i][1], C1=line[i][2];
        for (int j = i+1; j<n ; ++j) {
            long long A2 = line[j][0], B2=line[j][1], C2 = line[j][2];
            
            long long det = A1 * B2 - A2 * B1 ;
            if (det == 0 ) continue;
            
            long long xnum = B1 * C2 - B2 * C1 ;
            long long ynum = C1 * A2 - C2 * A1;
            
            if (xnum % det != 0 || ynum % det != 0) continue;
            long long x = xnum/det;
            long long y = ynum/ det;
            stars.insert({x,y});
        }
    }
    long long minX = (*stars.begin()).first,  maxX = (*stars.begin()).first;
    long long minY = (*stars.begin()).second, maxY = (*stars.begin()).second;
    for (auto &p : stars) {
        minX = min(minX, p.first);
        maxX = max(maxX, p.first);
        minY = min(minY, p.second);
        maxY = max(maxY, p.second);
    }

    long long W = maxX - minX + 1;
    long long H = maxY - minY + 1;
    
    vector<string> board((size_t)H, string((size_t)W, '.'));
    for (auto &p : stars) {
        size_t r = (size_t)(maxY - p.second);
        size_t c = (size_t)(p.first - minX);
        board[r][c] = '*';
    }

    return board;
}