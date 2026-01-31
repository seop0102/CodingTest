#include <iostream>

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
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int d =  (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        
        // 1. 중심이 같은 경우 
        if (x1 == x2 && y1 == y2)
        {
            // r1 == r2 무한대
            // r1 != r2 교점 0
            if (r1 == r2) cout << -1 << "\n";
            else cout << 0 << "\n";
        } 
        // 2. 중심이 다른 경우
        else
        {
            // 교점 두개 |r1-r2| < d < r1+r2
            if ((r1-r2)*(r1-r2) < d && d < (r1+r2)*(r1+r2)) cout << 2 << "\n";
            // 교점 한개 외접,내접
            else if ( (d == (r1+r2)*(r1+r2)) || (d == (r1-r2)*(r1-r2))) cout << 1 << "\n";
            // 교점 0개 너무 먼 경우, 안에 완전히 들어간 경우
            else cout << 0 << "\n";            
        }
    }
    // ----------------------------------------
    return 0;
}