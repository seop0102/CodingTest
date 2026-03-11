#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int t;
    cin >> t;
    unordered_map<string, int> m;
    for (int i = 0 ; i < t ; i++ )
    {
        string book;
        cin >> book;
        m[book]++;
    }
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [] (pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second == p2.second)
        {
            return p1.first < p2.first;
        }
        return p1.second > p2.second;
    });
    cout << v[0].first;
    // ----------------------------------------
    return 0;
}