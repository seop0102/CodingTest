#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    vector<pair<int,char>> v(26);
    
    for (int i = 0; i < 26; i++)
    {
        v[i] = {0, char('A'+i)};
    }
    for (char c : s)
    {
        if ( c >= 'a' && c <= 'z')
        {
            v[c-'a'].first++;
        } else if ( c >= 'A' && c <= 'Z')
        {
            v[c-'A'].first++;
        }
    }
    sort (v.begin(), v.end(), [] (auto &a, auto &b)
    {
        return a.first > b.first;
    });
    if (v[0].first == v[1].first)
    {
        cout << "?";
    }
    else
    {
        cout << v[0].second;;
    }
    // ----------------------------------------
    return 0;
}