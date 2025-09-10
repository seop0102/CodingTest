#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, int k, vector<int> enemy) {
    priority_queue<int> pq;
    long long sum = 0;
    
    for (int i = 0 ; i < enemy.size(); ++i) {
        sum += enemy[i];
        pq.push(enemy[i]);
        
        if ( sum > n ) {
            if ( k==0) return i;
            sum -= pq.top();
            pq.pop();
            k--;
        }
    }
    return enemy.size();
}