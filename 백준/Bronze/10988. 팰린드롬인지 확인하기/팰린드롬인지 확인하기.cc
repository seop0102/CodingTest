#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    string re = s;
    reverse(re.begin(), re.end());
    if ( re == s)
    {
        cout << 1;
    } else
    {
        cout << 0;
    }
    
    // ----------------------------------------
    return 0;
}
