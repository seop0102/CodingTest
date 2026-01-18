#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int R;
        string S;
        cin >> R >> S;
        string newString = "";
        for (int i = 0; i < S.length(); i++)
        {
            for (int j = 0; j < R; j++)
            {
                newString += S[i];
            }
        }
        cout<<newString<<"\n";
    }
    // ----------------------------------------
    return 0;
}