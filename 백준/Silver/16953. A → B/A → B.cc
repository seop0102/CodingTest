#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    cin >> A >> B;
    int count = 1;
    while (true)
    {
        if ( B == A )
        {
            cout << count ;
            return 0;
        }
        if (B < A)
        {
            cout << -1;
            return 0;
        }
        if ( B % 10 == 1)
        {
            B--;
            B/=10;
        } else if ( B % 2 == 0 )
        {
            B /= 2;
        } else
        {
            cout << -1;
            return 0;
        }
        count ++;
    }
    return 0;
}