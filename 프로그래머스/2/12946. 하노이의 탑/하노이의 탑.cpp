#include <string>
#include <vector>

using namespace std;

void Hanoi (int n , int from, int via, int to, vector<vector<int>>& ans) {
    if ( n == 1) {
        ans.push_back({from,to});
        return;
    }
    Hanoi(n-1, from, to, via, ans); 
    ans.push_back({from,to}); 
    Hanoi(n-1,via,from,to,ans); 
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    Hanoi(n,1,2,3,answer);
    return answer;
}