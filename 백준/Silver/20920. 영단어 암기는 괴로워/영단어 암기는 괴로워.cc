#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    map<string, int> m;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if ( s.length() >= M )
        {
            m[s]++;
        } 
    }
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [] (pair<string,int> a, pair<string, int> b)
    {
        if (a.second != b.second)
        {
            return a.second > b.second;
        } 
        if (a.first.length() != b.first.length())
        {
            return a.first.length() > b.first.length();
        }
        return a.first < b.first;
    });
    for (int i = 0; i < v.size() ; i++)
    {
        cout << v[i].first << "\n";
    }
    return 0;
}
