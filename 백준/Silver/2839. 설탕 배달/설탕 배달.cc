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
    vector<pair<int,int>> v;
    for (int i = 0 ; i <= 1667 ; i++)
    {
        for (int j = 0 ; j <= 1000; j++)
        {
            if (3*i + 5*j == N)
            {
                v.push_back({i,j});
            }
        }
    }
    if (v.empty())
    {
        cout << -1 ;
        return 0;
    }
    sort(v.begin(), v.end(),[] (pair<int,int> a, pair<int,int> b)
    {
        return a.first+a.second < b.first+b.second;
    });
    cout << v[0].first+v[0].second;
    // ----------------------------------------
    return 0;
}