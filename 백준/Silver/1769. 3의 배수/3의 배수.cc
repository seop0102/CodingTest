#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    int num = 0;
    while (s.length() > 1)
    {
        int temp = 0;
        for (char c : s)
        {
            temp += c -'0';
        }
        num++;
        s = to_string(temp);
    }
    if (s[0] -'0' == 3 || s[0] -'0' == 6 || s[0] -'0' == 9)
    {
        cout << num << "\n" << "YES";
    }
    else
    {
        cout << num << "\n" << "NO";
    }
    // ----------------------------------------
    return 0;
}