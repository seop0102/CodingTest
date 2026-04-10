#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //이중포문은 시간초과난다
    // 앞에 [0]부터 [k-1]까지 더하고 맨 앞에거 빼고 뒤에거 더하면서 이어나가기
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    vector<int> ans;
    for (int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0 ; i < K ; i ++)
    {
        sum += arr[i];
    }
    int maxSum = sum;
    for (int i = K; i < N; i++)
    {
        sum = sum - arr[i-K] + arr[i];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
    return 0;
}
