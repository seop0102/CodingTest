#include <iostream>
#include <string>
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
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        if (s.find(str) != s.end())
        {
            sum++;
        }
        
    }
    cout << sum ;
    // ----------------------------------------
    return 0;
}
