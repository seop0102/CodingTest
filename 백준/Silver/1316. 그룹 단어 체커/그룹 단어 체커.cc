#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    int sum = 0;
    for (int t = 0; t < N; t++)
    {
        int alphabet[26] = {0};
        string s;
        cin >> s;
        alphabet[s[0] - 'a']++;
        bool bIsCheck = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i-1])
            {
                if (alphabet[s[i] - 'a'] > 0)
                {
                    bIsCheck = false;
                    break;
                }
                alphabet[s[i] - 'a']++;
            }
        }
        if (bIsCheck) sum ++;
    }
    cout << sum ;
    // ----------------------------------------
    return 0;
}
