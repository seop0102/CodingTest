#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r;
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int A, B;
        cin >> A >> B;
        cout << A*B / gcd(A, B) << "\n";
    }
    // ----------------------------------------
    return 0;
}
