#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int a, b;
        cin >> a >> b;
        b %= 4;
        int ans = 1;
        if (b==0) b+=4;
        for (int i = 0 ; i < b; i++)
        {
            ans *= a;
        }
        if (ans%10 == 0) ans = 10;
        else ans %= 10;
        cout << ans << "\n";
    }
    // ----------------------------------------
    return 0;
}