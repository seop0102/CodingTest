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
    vector<vector<int>> arr;
    for (int t = 0; t < N; t++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x,y});
    }
    sort(arr.begin(), arr.end(), [] (vector<int> a, vector<int> b)
    {
        
        if (a[1] == b[1])
        {
            return a[0] < b[0];
        } 
        return a[1] < b[1];
    });
    for (int i = 0 ; i < N ; i++)
    {
        cout << arr[i][0] <<" " <<arr[i][1] << "\n";
    }
    // ----------------------------------------
    return 0;
}