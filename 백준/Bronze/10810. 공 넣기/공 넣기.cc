#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int arr[101] = {0};
    for (int t = 0; t < M; t++)
    {
        int i,j,k;
        cin >> i >> j >> k;
        for (int a = i-1; a < j ; a++)
        {
            arr[a] = k;
        }
    }
    for (int b = 0 ; b < N; b++)
    {
        cout << arr[b] << " ";
    }
    return 0;
}