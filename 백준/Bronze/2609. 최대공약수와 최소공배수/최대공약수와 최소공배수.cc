#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int A,B;
    cin >> A >> B;
    int minnum =1;
    for (int i = 1; i<=min(A,B); i++)
    {
        if ( A%i == 0 && B%i == 0)
        {
            minnum = i;
        }
    }
    int maxnum = 0;
    if ( minnum != 1)
    {
        maxnum = min(A,B) / minnum * max(A,B);
    } else
    {
        maxnum = A*B;
    }
    cout << minnum << "\n" << maxnum ;
    // ----------------------------------------
    return 0;
}