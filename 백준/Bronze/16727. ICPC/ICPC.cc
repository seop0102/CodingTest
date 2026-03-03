#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int p1, p2, s1, s2;
    int asum=0, bsum = 0;
    cin >> p1 >> s1 >> s2 >> p2;
    asum += p1 + p2;
    bsum += s1 + s2;
    if (asum > bsum) cout << "Persepolis";
    else if (asum < bsum) cout << "Esteghlal";
    else
    {
        if ( p2 >s1) cout << "Persepolis";
        else if (p2 < s1) cout << "Esteghlal";
        else cout << "Penalty";
    }
    // ----------------------------------------
    return 0;
}
