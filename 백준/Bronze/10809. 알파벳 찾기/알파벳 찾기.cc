#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    vector<int> arr(26,-1);
    string s;
    cin >> s;
    for (int i = 0 ; i<s.length(); i++)
    {
        int index = int(s[i])-97;
        if (arr[index] == -1 )
        {
            arr[index] = i;
        }
    }
    for (int j = 0 ; j<26; j++)
    {
        cout << arr[j] << " ";
    }
    // ----------------------------------------
    return 0;
}