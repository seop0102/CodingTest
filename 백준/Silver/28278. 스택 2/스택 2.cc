#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int order;
        cin >> order;
        if ( order == 1 )
        {
            int x;
            cin >> x;
            s.push(x);
        } else if ( order == 2 )
        {
            if ( s.empty() ) cout << -1 << "\n";
            else
            {
                int t = s.top();
                cout << t << "\n";
                s.pop();
            }
        } else if ( order == 3 )
        {
            cout << s.size() << "\n";
        } else if ( order == 4 )
        {
            if (s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
            
        } else
        {
            if ( s.empty() ) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
    return 0;
}