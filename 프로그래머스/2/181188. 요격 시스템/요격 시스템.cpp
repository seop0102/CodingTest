#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    sort (targets.begin(), targets.end(), [](auto& a, auto& b) {
        return a[1] < b[1];
    } ) ;
    
    int last = -1;
    int answer = 0;
    
    for (auto& t : targets) {
        int s = t[0];
        int e = t[1];
        
        if (last > s) continue;
        last = e;
        answer++;
    }
    return answer;
}