#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    map<string, int> m;
    for (int i = 0; i < N; i++)
    {
        string file;
        cin >> file;
        int index = file.find(".");
        string name = file.substr(index+1);
        m[name]++;
    }
    for (auto &a : m)
    {
        cout << a.first << " " << a.second << "\n";
    }
    return 0;
}