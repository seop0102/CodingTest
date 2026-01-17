#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    int total = 0;
    for (int i = 0 ; i < d.size() ; i++) {
        if ( total + d[i] <= budget ) {
            answer++;
            total += d[i];
        } else {
            break;
        }
    }
    return answer;
}