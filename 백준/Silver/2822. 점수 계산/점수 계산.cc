#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> v;
    for (int i = 0 ; i < 8 ; i++ )
    {
        int x;
        cin >> x;
        v.push_back({x,i+1});
    }
    sort(v.begin(), v.end(), [] (pair<int,int> a, pair<int,int> b)
    {
        return a.first > b.first;
    });
    int sum = 0;
    vector<int> rank;
    for (int i = 0; i < 5 ; i++)
    {
        sum += v[i].first;
        rank.push_back(v[i].second);
    }
    cout << sum << "\n";
    sort(rank.begin(), rank.end());
    for (int i = 0 ; i < 5; i++)
    {
        cout << rank[i] << " ";
    }
    return 0;
}