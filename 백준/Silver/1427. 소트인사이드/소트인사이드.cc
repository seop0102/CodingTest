#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0 ; i < s.length(); i++)
    {
        v.push_back(s[i] - '0');
    }
    sort(v.rbegin(), v.rend());
    for (int i : v)
    {
        cout << i;
    }
    // ----------------------------------------
    return 0;
}
