#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int now = 1;
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if ( x == now )
        {
            now ++;
        }
        else
        {
            s.push(x);
        }
        while ( !s.empty() && s.top() == now )
        {
            s.pop();
            now++;
        }
    }
    if ( s.empty() ) cout << "Nice";
    else cout << "Sad";
    return 0;
}