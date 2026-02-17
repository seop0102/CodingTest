#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    while (N > 1)
    {
        for (int i = 2; i <= N; i++)
        {
            if (N % i == 0)
            {
                N /= i;
                cout << i << "\n";
                break;
            }
        }
    }
    // ----------------------------------------
    return 0;
}
