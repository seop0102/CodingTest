#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<string> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    int L = V[0].size();
    for (int j = 1 ; j <= L ; j++ )
    {
        set<string> S;
        for (int k = 0 ; k < N ; k++)
        {
            S.insert(V[k].substr(L-j,j));
        }
        if (S.size() == N)
        {
            cout << j;
            break;
        }
    }
    // ----------------------------------------
    return 0;
}