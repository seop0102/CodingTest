#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int A,B;
    cin >> A >> B;
    cout << gcd(A,B) << "\n" <<lcm(A,B); 
    // ----------------------------------------
    return 0;
}