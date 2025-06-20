#include <string>
#include <vector>

using namespace std;
//배열 사용한 DP 풀이
int solution(int n) {
    int answer=0;
    vector<int> F(n+1); //F[0] ~ F[n]까지
    F[0]=0;
    F[1]=1;
    for (int i = 2; i<=n ; i++) {
        F[i] = (F[i-1] + F[i-2])%1234567;
    }
    answer = F[n];
    
    return answer;
}