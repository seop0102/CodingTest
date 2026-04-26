#include <iostream>

using namespace std;

long long gcd (long long a,long long b)
{
    while (b!=0)
    {
        long long r= a%b;
        a=b;
        b= r;
    } return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        long long A, B;
        cin >> A >> B;
        long long g = gcd(A, B);
        cout << A* (B/g) << "\n"; // g * ( A/g) * (B/g)
    }
    return 0;
}