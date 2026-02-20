#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        vector<int> a(11);
        a[1] = 1;
        a[2] = 2;
        a[3] = 4;
        for (int i = 4; i <= n; i++)
        {
            a[i] = a[i-1] + a[i-2] + a[i-3];
        }
        cout << a[n] << "\n";
    }
    // ----------------------------------------
    return 0;
}
