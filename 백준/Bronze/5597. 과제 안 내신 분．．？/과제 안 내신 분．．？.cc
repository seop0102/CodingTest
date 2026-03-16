#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    for (int i = 1; i <= 30 ; i++)
    {
        s.insert(i);
    }
    for (int i = 0 ; i < 28 ; i ++)
    {
        int x;
        cin >> x;
        s.erase(x);
    }
    for (int i : s)
    {
        cout << i << "\n";
    }
    return 0;
}