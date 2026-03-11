#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    unordered_map<long long, long long> m;
    for (int i = 0; i < N; i++)
    {
        long long x;
        cin >> x;
        m[x]++;
    }
    vector<pair<long long, long long>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [] (pair<long long, long long> p1, pair<long long, long long> p2)
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
