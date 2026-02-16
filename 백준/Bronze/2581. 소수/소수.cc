#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool bIsSoSu(int A)
{
    if (A==1)
    {
        return false;
    }
    for (int i = 2; i * i <= A ; i++)
    {
        if (A % i == 0 )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int M, N;
    cin >> M >> N;
    vector<int> arr;
    for (int i = M; i <= N; i++)
    {
        if (bIsSoSu(i) == true)
        {
            arr.push_back(i);
        }
    }
    if (arr.size() == 0)
    {
        cout << -1;
        return 0;
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << sum << "\n" << arr[0];
    // ----------------------------------------
    return 0;
}
