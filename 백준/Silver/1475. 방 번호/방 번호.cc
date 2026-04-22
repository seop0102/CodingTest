#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[501][501];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    int cnt[10] = {0};
    for (char c : n) 
    {
        cnt[c - '0'] ++;
    }
    cnt[6] = (cnt[6] + cnt[9] + 1 ) /2 ;
    cnt [9] = 0;
    int answer = 0;
    for (int i = 0 ; i < 10; i++)
    {
        answer = max (answer, cnt[i]);
    }
    cout << answer;
    return 0;
}