#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool check(const vector<string>& place) {
    vector<pair<int,int>> people;
    for (int r = 0 ; r<5; r++) {
        for (int c = 0 ; c<5 ; c++) {
            if (place[r][c]=='P') {
                people.push_back({r,c});
            }
        }
    }
    
    for (int i = 0 ; i<people.size(); i++) {
        for (int j = i+1; j<people.size(); j++) {
            int r1=people[i].first, c1=people[i].second;
            int r2=people[j].first, c2=people[j].second;
            int dist = abs(r1-r2)+abs(c1-c2);
            
            if (dist==1) return false;
            if (dist==2) {
                if (r1==r2) {
                    int midc=(c1+c2)/2;
                    if (place[r1][midc]!='X') return false;
                }
                else if (c1==c2) {
                    int midr=(r1+r2)/2;
                    if (place[midr][c1]!='X') return false;
                }
                else { // 대각선
                    if (!(place[r1][c2]=='X' && place[r2][c1]=='X'))
                        return false;
                }
            }
        }
    }
    return true;
}
vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    for (auto& p : places) {
        answer.push_back(check(p) ? 1 : 0);
    }
    return answer;
}