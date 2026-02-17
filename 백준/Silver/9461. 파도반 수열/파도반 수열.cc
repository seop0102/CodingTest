#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        vector<long long> arr(N+1);
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 1;
        for (int i = 3; i <= N; i++)
        {
            arr[i] = arr[i-2] + arr[i-3];
        }
        cout << arr[N-1] << "\n" ;
    }
    // ----------------------------------------
    return 0;
}
