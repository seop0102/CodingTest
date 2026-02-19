#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N,K;
    cin >> N >> K;
    int sum = 0;
    vector<int> arr(N);
    for (int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    for (int i = N-1 ; i>=0 ; i-- )
    {
        sum += K/arr[i];
        K%=arr[i];
    }
    cout << sum ;
    // ----------------------------------------
    return 0;
}
