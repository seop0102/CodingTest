#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    vector<int> count;
    sort(dungeons.begin(), dungeons.end());
    
    do {
        int a = k;
        int num = 0;
        for (int i = 0 ; i<dungeons.size(); ++i) {
            int x = dungeons[i][0]; //최소피로도
            int y = dungeons[i][1]; //소모피로도
            
            if ( a >= x) {
                a -= y;
                num++;
            } else {
                break;
            }
        }
        count.push_back(num);
    } while (next_permutation(dungeons.begin(), dungeons.end()));
    return *max_element(count.begin(),count.end());
}