#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double N,B,M;
    while (cin >> N >> B >> M) // 현재 돈, 이자, 넘어야 하는 액수
    {
        int year = 0;
        while ( N <= M)
        {
            N = N + N * (B / 100.0);
            year++;
        }
        cout << year << "\n";
    }
    
    return 0;
}
