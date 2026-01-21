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
    int sum = 0;
    int t;
    for (int i = 0 ; i < 13; i++ )
    {
        if ( i % 2 == 0)
        {
            if (s[i] == '*')
            {
                t = 1;
            } else
            {
                sum += s[i]-'0'; 
            }
        } else
        {
            if (s[i] == '*')
            {
                t = 0;
            } else
            {
                sum += (s[i] -'0') * 3;
            }
        }
    }
    for (int j = 0 ; j < 10 ; j++ )
    {
        if ( t == 1 )
        {
            if ((sum + j) % 10 == 0 )
            {
                cout << j ;
                return 0;
            }
        } else
        {
            if ((sum+ j*3) % 10 == 0 )
            {
                cout << j ;
                return 0;
            }
        }
    }
    // ----------------------------------------
    return 0;
}

