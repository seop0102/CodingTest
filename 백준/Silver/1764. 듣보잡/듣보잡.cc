#include <iostream>
#include <set>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, M;
    cin >> N >> M;
    set<string> s;
    set<string> ans;
    for (int i = 0 ; i < N ; i++)
    {
        string a;
        cin >> a;
        s.insert(a);
    }
    for (int i = 0 ; i < M ; i ++)
    {
        string b;
        cin >> b;
        if (s.find(b)!=s.end())
        {
            ans.insert(b);
        }
    }
    cout << ans.size() << "\n";
    for (string k : ans)
    {
        cout << k << "\n";
    }
    // ----------------------------------------
    return 0;
}
