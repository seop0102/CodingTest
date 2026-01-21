#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    long long int A, B;
    cin >> A >> B;
    int gcdNum = gcd(A,B);
    for (int i = 0 ; i< gcdNum ; i++)
    {
        cout <<1;
    }
    // ----------------------------------------
    return 0;
}

