#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    string s = "";
    for (int i = 0; i < N; i++)
    {
        s += "a";
    }
    cout << s;
    return 0;
}