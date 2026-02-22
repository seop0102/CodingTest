#include <iostream>
#include <string>
#include <deque>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    deque<int> d;
    for (int t = 0 ; t < N; t++)
    {
        string s;
        cin >> s;
        int x;
        if (s == "push_front")
        {
            cin >> x;
            d.push_front(x);
        } else if ( s == "push_back")
        {
            cin >>x;
            d.push_back(x);
        } else if ( s == "pop_front")
        {
            if ( d.empty() )
            {
                cout << "-1\n";
            } else
            {
                int temp = d.front();
                cout << temp << "\n";
                d.pop_front();
            }
        } else if ( s == "pop_back")
        {
            if ( d.empty() )
            {
                cout << "-1\n";
            } else
            {
                int temp = d.back();
                cout << temp << "\n";
                d.pop_back();
            }
        } else if ( s=="size")
        {
            cout << d.size() << "\n";
        } else if (s=="empty")
        {
            if ( d.empty() )
            {
                cout << "1\n";
            } else
            {
                cout << "0\n";
            }
        } else if (s == "front")
        {
            if (d.empty() )
            {
                cout << "-1\n";
            } else
            {
                int temp = d.front();
                cout << temp << "\n";
            }
        } else if (s == "back")
        {
            if (d.empty() )
            {
                cout << "-1\n";
            } else
            {
                int temp = d.back();
                cout << temp << "\n";
            }
        }
    }
    // ----------------------------------------
    return 0;
}
