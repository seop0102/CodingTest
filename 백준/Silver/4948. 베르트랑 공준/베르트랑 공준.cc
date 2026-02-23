#include <iostream>

using namespace std;

bool bIsSosu (int n)
{
    if ( n == 1 )
    {
        return false;
    } 
    for (int i = 2 ; i*i <= n; i++)
    {
        if ( n % i == 0)
        {
           return false; 
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int t;
    while (cin >> t)
    {
        if (t == 0)
        {
            break;
        }
        int sum = 0;
        for (int i = t+1; i<=2*t; i++)
        {
            if (bIsSosu(i))
            {
                sum++;
            }
        }
        cout << sum << "\n";
    }
    // ----------------------------------------
    return 0;
}
