#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    set<int> s ;
    for (int i = 1; i <= 10; i++)
    {
        int a;
        cin >> a;
        s.insert(a%42);
    }
    cout << s.size();
    // ----------------------------------------
    return 0;
}