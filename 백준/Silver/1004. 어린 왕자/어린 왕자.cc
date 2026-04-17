#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a,b,r;
            cin >> a >> b >> r;
            bool bIsStart = (a-x1) * (a-x1) + (b-y1) * (b-y1) < r*r;
            bool bIsEnd = (a-x2) * (a-x2) + (b-y2) * (b-y2) < r*r;
            if (bIsStart != bIsEnd)
            {
                count ++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
