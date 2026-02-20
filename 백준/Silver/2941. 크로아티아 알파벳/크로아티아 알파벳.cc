#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for (int i = 0; i < 8; i++)
    {
        while (true)
        {
            int pos = s.find(arr[i]);
            if (pos == string::npos)
            {
                break;
            }
            s.replace(pos, arr[i].length(), "*");
        }
    }
    cout << s.length();
    // ----------------------------------------
    return 0;
}
