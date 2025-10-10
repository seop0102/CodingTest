#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int solution(vector<int> a) {
    int answer = 0;
    int n = a.size();
    
    if ( n <= 2) return n; //2개 이하면 다 가능
    
    vector<int> L(n);
    L[0] = a[0];
    for (int i = 1; i<n; ++i) {
        L[i] = min(L[i-1], a[i]);
    }
    int rightMin = INT_MAX;
    for (int i = n-1; i>= 0 ; --i) {
        bool left = (i==0) || (a[i] <= L[i-1]);
        bool right = (i== n-1) || (a[i] <= rightMin);
        
        if (left || right ) {
            ++answer;
        }
        rightMin = min(rightMin,a[i]);
    }
    return answer;
}