#include <iostream>

using namespace std;

long gcd(long a, long b)
{
    while (b != 0)
    {
        long r = a % b;
        a = b; 
        b = r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long A,B;
    cin >> A >> B;
    long g = gcd(A, B);
    cout << (A*B)/g;
    return 0;
}