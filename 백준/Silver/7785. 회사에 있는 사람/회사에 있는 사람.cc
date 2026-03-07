#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string name , log;
        cin >> name >> log;
        if (log == "enter")
        {
            s.insert(name);
        } else
        {
            s.erase(name);
        }
    }
    vector<string> v;
    for (string l : s)
    {
        v.push_back(l);
    }
    for (int i = v.size()-1; i >=0; i--)
    {
        cout << v[i] << '\n';
    }
    // ----------------------------------------
    return 0;
}
