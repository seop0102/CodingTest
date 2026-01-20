#include <iostream>
#include <cmath>

using namespace std;

bool bIsSosu (int n)
{
    if ( n < 2) return false;
    for (int i = 2; i<=sqrt(n);i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int M,N;
    cin >> M >> N;
    for (int j = M ; j<=N;j++)
    {
        if (bIsSosu (j)) cout<<j<<"\n";
    }
    // ----------------------------------------
    return 0;
}