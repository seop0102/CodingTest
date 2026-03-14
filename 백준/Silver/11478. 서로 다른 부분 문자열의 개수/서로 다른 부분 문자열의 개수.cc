#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    set<string> s;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 1 ; j <= str.length()-i; j++)
        {
            s.insert(str.substr(i, j ));
        }
    }
    
    // ababa
    // 0 12345
    // 1 1234
    // 2 123
    // 3 12
    // 4 1
    // i+j = length()
    /*for (string c : s)
    {
        cout << c << endl;
    }*/
    cout << s.size();
    return 0;
}