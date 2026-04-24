#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != first)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}