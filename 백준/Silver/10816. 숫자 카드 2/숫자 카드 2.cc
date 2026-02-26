#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int M;
    cin >> M;
    unordered_map <int, int> m;
    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;
        m[n] ++;
    }
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        cout << m[x] << " ";
    }
    // ----------------------------------------
    return 0;
}
