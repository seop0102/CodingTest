#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n ; i ++)
    {
        for (int j = 1; j <= i; j++)
        {
            int x;
            cin >> x;
            // 맨 왼쪽
            if ( j == 1 )
            {
                dp[i][j] = dp[i-1][j] + x;
            }
            // 중간
            else if ( j > 1 && j < i)
            {
                int a = dp[i-1][j-1] + x;
                int b = dp[i-1][j] + x;
                if ( a >= b)
                {
                    dp[i][j] = a;
                } else
                {
                    dp[i][j] = b;
                }
            }
            else // 맨 오른쪽
            {
                dp[i][j] = dp[i-1][j-1] + x;
            }
        }
    }
    int answer = 0 ;
    for (int i = 1; i<= n ; i++)
    {
        if (answer <= dp[n][i])
        {
            answer = dp[n][i];
        }
    }
    cout << answer;
    return 0;
}