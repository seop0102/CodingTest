#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    cin.ignore();
    queue<int> q;
    for (int i = 0 ; i < N ; i++)
    {
        string str;
        getline(cin,str);
        string words = str.substr(0,2);
        if (words == "pu")
        {
            string num = str.substr(5, str.length()-5);
            q.push(stoi(num));
        } else if ( words == "po")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            } else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if ( words == "si")
        {
            cout << q.size() << "\n";
        } else if ( words == "em")
        {
            if (q.empty())
            {
                cout << 1 << "\n";
            } else
            {
                cout << 0 << "\n";
            }
        } else if ( words == "fr" )
        {
            if (q.empty())
            {
                cout << -1 << "\n" ;
            } else
            {
                cout << q.front() << "\n";
            }
        } else if ( words == "ba")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            } else
            {
                cout << q.back() << "\n";
            }
        }
    }
    // ----------------------------------------
    return 0;
}