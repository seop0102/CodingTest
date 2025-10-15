#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(string s)
{
    int answer=1;
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    for (int i = 0 ; i < n ; i++) {
        dp[i][i] = true;
    }
    
    for (int i = 0 ; i < n-1 ; i++) {
        if (s[i] == s[i+1]) {
            dp[i][i+1] = true;
            answer = 2;       
        }
    }
    for (int len = 3; len <= n; len ++) {
        for (int l = 0 ; l+len -1 < n ; l++) {
            int r = l + len -1 ;
            if (s[l]==s[r] && dp[l+1][r-1]) {
                dp[l][r] = true;
                answer = max(answer, len);
            }
        }
    }
    return answer;
}