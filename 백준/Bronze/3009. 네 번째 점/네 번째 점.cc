#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    vector<int> x;
    vector<int> y;
    for (int i = 0 ; i < 3 ; i++ )
    {
        int a,b;
        cin >> a >> b;
        bool bIsFound = false;
        for (int j = 0 ; j < x.size(); j++)
        {
            if (x[j] == a)
            {
                x.erase(x.begin() + j);
                bIsFound = true;
                break;
            }
        }
        if (!bIsFound)
        {
            x.push_back(a);
        }
        bIsFound = false;
        for (int j = 0 ; j < y.size(); j++)
        {
            if (y[j] == b)
            {
                y.erase(y.begin() + j);
                bIsFound = true;
                break;
            }
        }
        if (!bIsFound)
        {
            y.push_back(b);
        }
    }
    cout << x[0] << " " << y[0];
    // ----------------------------------------
    return 0;
}
