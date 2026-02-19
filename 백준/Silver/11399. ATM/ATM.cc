#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = N ; i>0; i--)
    {
        sum += i * arr[N-i];
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}
