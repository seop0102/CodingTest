#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    cin.ignore();
    stack<int> s;
    for (int i = 0 ; i < N ; i++)
    {
        string str;
        getline(cin,str);
        string words = str.substr(0,2);
        if (words == "pu")
        {
            string num = str.substr(5, str.length()-5);
            s.push(stoi(num));
        } else if ( words == "po")
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            } else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if ( words == "si")
        {
            cout << s.size() << "\n";
        } else if ( words == "em")
        {
            if (s.empty())
            {
                cout << 1 << "\n";
            } else
            {
                cout << 0 << "\n";
            }
        } else if ( words == "to" )
        {
            if (s.empty())
            {
                cout << -1 << "\n" ;
            } else
            {
                cout << s.top() << "\n";
            }
        }
    }
    // ----------------------------------------
    return 0;
}