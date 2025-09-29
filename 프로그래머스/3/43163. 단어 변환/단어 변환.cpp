#include <string>
#include <vector>
#include <queue>

using namespace std;

static bool IsOneDiff(const string& a, const string& b) {
    int diff = 0;
    for (int i = 0 ; i<a.size(); ++i) {
        if(a[i] != b[i]) {
            if (++diff > 1 ) {
                return false;
            }
        }
    }
    return diff ==1;
}

int solution(string begin, string target, vector<string> words) {
    bool HasTarget = false;
    for (const auto& w : words) {
        if (w == target) {
            HasTarget = true;
            break;
        }
    }
    if (!HasTarget) {
        return 0;
    }
    vector<int> visited(words.size(),0);
    
    queue<pair<int,int>> q;
    
    for(int i = 0 ; i<words.size(); ++i) {
        if (IsOneDiff(begin,words[i])) {
            visited[i] = 1;
            q.push({i,1});
        }
    }
    while(!q.empty()) {
        auto [idx,dist] = q.front(); q.pop();
        
        if (words[idx] == target) {
            return dist;
        }
        for (int nxt = 0; nxt < words.size(); ++nxt) {
            if (!visited[nxt] && IsOneDiff(words[idx], words[nxt])) {
                visited[nxt]=1;
                q.push({nxt,dist+1});
            }
        }
    }
    return 0;
}