#include <iostream>
#include <vector>
#include <algorithm>

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
        cin>>arr[i];
    }
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    sort(arr.begin(), arr.end());
    for (int j = 0 ; j<arr.size(); j++)
    {
        cout<<arr[j]<<"\n";
    }
    // ----------------------------------------
    return 0;
}