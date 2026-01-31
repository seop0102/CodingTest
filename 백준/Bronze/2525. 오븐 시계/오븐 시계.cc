#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int h, m, t;
    cin >> h >> m >> t;
    int current = h*60 + m + t;
    current %= (24 * 60);
    cout << current/60 << " " << current%60;
    // ----------------------------------------
    return 0;
}