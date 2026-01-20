#include <iostream>
#include <cmath>

using namespace std;

bool bIsSosu(int n)
{
    if (n<2) return false;
    for (int i = 2; i<=sqrt(n); i++)
    {
        if (n%i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    int sum =0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        if (bIsSosu(A)) sum++;
    }
    cout<<sum;
    // ----------------------------------------
    return 0;
}