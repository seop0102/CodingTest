#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int sum = 0;
    for (int i = 0 ; i < 8 ; i++)
    {
        string s;
        cin >> s;
        for (int j = 0 ; j < 8 ; j++)
        {
            if (i % 2 == 0)
            {
                if (j%2 == 0 && s[j] == 'F') sum++;
            } else
            {
                if (j%2 != 0 && s[j] == 'F') sum++;
            }
        }
    }
    cout << sum ;
    // ----------------------------------------
    return 0;
}