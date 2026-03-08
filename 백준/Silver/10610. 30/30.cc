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
    
    int sum = 0;
    vector<int> v;
    bool bHasZero = false;
    for (int i = 0 ; i < s.length(); i++)
    {
        sum += s[i] - '0';
        v.push_back(s[i] - '0');
        if (s[i] == '0')
        {
            bHasZero = true;
        }
    }
    sort(v.rbegin(), v.rend());
    if (bHasZero == false || sum %3 != 0)
    {
        cout << "-1";
        return 0;
    }
    for (int i : v)
    {
        cout << i;
    }
    // ----------------------------------------
    return 0;
}
