#include <iostream>
#include <unordered_set>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int a, b;
    cin >> a >> b;
    unordered_set<int> s;
    for (int i = 0; i < a ; i++)
    {
        int x; 
        cin >> x;
        s.insert(x);
    }
    int n = 0;
    for (int i = 0 ; i < b ; i++)
    {
        int y; 
        cin >> y;
        if ( s.count(y) )
        {
            n++;
        }
    }
    cout << a+b - 2* n;
    // ----------------------------------------
    return 0;
}