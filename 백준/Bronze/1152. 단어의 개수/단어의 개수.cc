#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    getline(cin,s);
    if (s.empty())
    {
        cout<<0;
        return 0;
    }
    if (s[0] == ' ' )
    {
        s.erase(0,1);
    }
    if (s.empty())
    {
        cout<<0;
        return 0;
    }
    if (s[s.length()-1] == ' ')
    {
        s.erase(s.length()-1,1);
    }
    if (s.empty())
    {
        cout<<0;
        return 0;
    }
    // 앞뒤 공백 제거
    int sum = 0;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if ( s[i] == ' ')
        {
            sum++;
        }
    }
    cout<<sum+1;
    // ----------------------------------------
    return 0;
}