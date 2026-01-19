#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int score = 1;
        int sum = 0 ;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'O')
            {
                sum+=score;
                score++;
            } else
            {
                // 'X'
                score = 1;
            }
        }
        cout<<sum<<"\n";
    }
    // ----------------------------------------
    return 0;
}