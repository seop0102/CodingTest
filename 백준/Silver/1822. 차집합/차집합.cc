#include <set>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    set<int> s;
    int A, B;
    cin >> A >> B;
    for (int i = 0; i < A; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < B; i++)
    {
        int x;
        cin >> x;
        if (s.find(x) != s.end())
        {
            s.erase(x);
        } else
        {
            continue;
        }
    }
    cout << s.size() << "\n";
    if (s.size() == 0) return 0;
    for (int i : s)
    {
        cout << i <<" ";
    }
    // ----------------------------------------
    return 0;
}
