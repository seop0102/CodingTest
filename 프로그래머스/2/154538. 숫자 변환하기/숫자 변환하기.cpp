#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) {
    queue<pair<int,int>> q;
    unordered_set<int> visited;
    q.push({x,0});
    visited.insert(x);
    
    while (!q.empty()) {
        int sum = q.front().first;
        int count = q.front().second;
        q.pop();
        if ( sum == y ) return count;
        
        if (sum +n <= y && !visited.count(sum+n)) {
            q.push({sum+n, count+1});
            visited.insert(sum+n);
        }
        if (sum * 2 <= y && !visited.count(sum * 2)) {
            q.push({sum * 2, count+1});
            visited.insert(sum * 2);
        }
        if (sum * 3 <= y && !visited.count(sum * 3)) {
            q.push({sum * 3, count + 1});
            visited.insert(sum * 3);
        }
    }
    return -1;
}