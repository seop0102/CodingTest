#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool bSosu (long long a) { 
    if ( a < 2) return false;
    if ( a == 2) return true;
    if ( a == 3) return true;
    for (long long i = 2; i * i <= a; i++)
    {
        if ( a % i == 0)
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
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n;
        cin >> n;
        while (true)
        {
            if (bSosu (n))
            {
                cout << n << "\n";
                break;
            } else
            {
                n++;
            }
        }
    }
    return 0;
}