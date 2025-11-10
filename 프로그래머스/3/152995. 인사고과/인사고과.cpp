#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int solution(vector<vector<int>> scores) {
    int score1 = scores[0][0]; 
    int score2 = scores[0][1];
    int sum = score1 + score2; 
    int cnt = 1;         


    sort(scores.begin(), scores.end(),
         [](const vector<int>& o1, const vector<int>& o2) {
             if (o1[0] != o2[0]) return o2[0] < o1[0]; 
             return o1[1] < o2[1];                  
         });

    int maxVal = scores[0][1];
    int max_2 = 0;        
    int cur = scores[0][0];  

    unordered_set<int> temp;  
    temp.insert(scores[0][1]);

    for (int i = 0; i < (int)scores.size(); i++) {
        bool safe = true;

        if (cur > scores[i][0]) { 
            if (maxVal > scores[i][1]) safe = false;
            for (int next : temp) { 
                max_2 = max(max_2, next);
            }
            temp.clear();
        }
        else if (cur == scores[i][0]) {
            temp.insert(scores[i][1]);
            if (max_2 > scores[i][1]) { 
                safe = false;
            }
        }

        maxVal = max(maxVal, scores[i][1]);
        if (!safe && scores[i][0] == score1 && scores[i][1] == score2) return -1;
        if (safe && sum < scores[i][0] + scores[i][1]) cnt++;
    }

    return cnt;
}