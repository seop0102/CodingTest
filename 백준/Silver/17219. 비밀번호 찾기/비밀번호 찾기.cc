#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N,M;
    cin >> N >> M;
    unordered_map<string, string> m;
    for (int t = 0; t < N; t++)
    {
        string site, password;
        cin >> site >> password;
        m.insert({site, password});
    } 
    for (int t = 0 ; t< M; t++)
    {
        string s;
        cin >> s;
        cout << m[s] << "\n";
    }
    // ----------------------------------------
    return 0;
}
