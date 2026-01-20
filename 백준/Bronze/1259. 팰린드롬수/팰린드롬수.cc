#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    while (cin >> s)
    {
        if (s == "0")
        {
            return 0;
        }
        string temp = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            temp += s[i];
        }
        if (temp == s)
        {
            cout << "yes" << "\n";
        } else
        {
            cout << "no" << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}