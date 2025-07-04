#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    //빈도수 세기
    map<int, int> count;
    for (int num : tangerine) {
        count[num]++;
    }
    //최빈값 순으로
    sort(tangerine.begin(), tangerine.end(), [&](int a, int b)  {
        if (count[a] != count[b]) {
            return count[a] > count[b];
        }
        return a < b;
    });
    vector<int> sliced(tangerine.begin(), tangerine.begin() + k);
    int a = 0;
    for (int x : sliced) {
        if ( a != x ){
            answer ++;
            a = x;
        } else {
            a = x;
            continue;
        }
    }
    return answer;
}