#include <unordered_set>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    int sum = 0;
    unordered_set<string> s;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if ( name == "ENTER")
        {
            sum += s.size();
            s.clear();
        } else
        {
            s.insert(name);
        }
    }
    if (s.size() > 0)
    {
        sum += s.size();
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}
