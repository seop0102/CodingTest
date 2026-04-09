#include <iostream>

using namespace std;

int N;
long long arr[21];

long long fac (int N)
{
    arr[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        arr[i] = arr[i-1] * i;
    }
    return arr[N];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    cout << fac(N);
    return 0;
}
