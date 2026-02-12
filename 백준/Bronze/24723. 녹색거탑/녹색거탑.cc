#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    int sum = 1;
    for (int i = 0; i < N; i++)
    {
        sum *= 2;
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}