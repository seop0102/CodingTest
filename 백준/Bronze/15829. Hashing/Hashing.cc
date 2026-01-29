#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    string s;
    cin >> N >> s;
    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int t = 1;
        for (int j = 1 ; j <= i; j++)
        {
            t *= 31;
        }
        sum += t * (s[i]-'a'+1);
    }
    cout << sum% 1234567891;
    // ----------------------------------------
    return 0;
}