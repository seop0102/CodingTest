#include <iostream>
#include <cstring>

using namespace std;

int count;

int recursion(const char *s, int l, int r)
{
    count++;
    if ( l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalidrome(const char *s)
{
    count = 0;
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        string str;
        cin >> str;
        cout << isPalidrome(str.c_str()) << " " << count << endl;
    }
    return 0;
}
