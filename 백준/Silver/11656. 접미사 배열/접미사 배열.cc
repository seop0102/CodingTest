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
    vector<string> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(s.substr(i, s.length()-i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    // ----------------------------------------
    return 0;
}
