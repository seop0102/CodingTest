#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    unordered_set<int> s;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int y;
        cin >> y;
        if (s.find(y) != s.end())
        {
            cout << "1 ";
        } else
        {
            cout << "0 ";
        }
    }
    // ----------------------------------------
    return 0;
}
