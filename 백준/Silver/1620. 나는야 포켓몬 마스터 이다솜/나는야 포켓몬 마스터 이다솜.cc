#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, M;
    cin >> N >> M;
    unordered_map<string, int> m;
    vector<string> v;
    for (int i = 1 ; i <= N ; i++ )
    {
        string name;
        cin >> name;
        m[name] = i;
        v.push_back(name);
    }
    for (int i = 0 ; i < M; i++)
    {
        string find;
        cin >> find;
        if ( 0 <= find[0] && find[0] <= '9')
        {
            cout << v[stoi(find)-1] << "\n";
        } else
        {
            cout << m[find] << '\n';
        }
    }
    // ----------------------------------------
    return 0;
}
