#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    deque<int> d;
    for (int i = 0 ; i < N; i++) {
	    int x;
        cin >> x;
        if ( x== 1)
        {
            int y;
            cin >> y;
            d.push_front(y);
        } else if ( x== 2)
        {
            int y;
            cin >> y;
            d.push_back(y);
        } else if ( x== 3)
        {
            if (d.empty()) cout << -1 << "\n";
            else
            {
                int y =d.front();
                cout << y << "\n";
                d.pop_front();
            }
        } else if ( x== 4)
        {
            if (d.empty()) cout << -1 << "\n";
            else
            {
                int y = d.back();
                cout << y << "\n";
                d.pop_back();
            }
        }else if ( x== 5)
        {
            cout << d.size() << "\n";
        } else if ( x== 6)
        {
            if (d.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if ( x==7)
        {
            if (d.empty()) cout << -1 << "\n";
            else cout << d.front()<<"\n";
        } else if ( x== 8)
        {
            if (d.empty()) cout << -1 << "\n";
            else cout << d.back()<<"\n";
        }
}
    return 0;
}