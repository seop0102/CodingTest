#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0 ; t < T ; t++)
    {
        int N;
        cin >> N;
        vector<pair<int,int>> F(N+1);
        F[0] = {1,0};
        F[1] = {0,1};
        for (int i =2 ; i <= N ; i++)
        {
            F[i].first = F[i-1].first + F[i-2].first;
            F[i].second = F[i-1].second + F[i-2].second;
        }
        cout << F[N].first << " " << F[N].second << "\n";
    }
    // ----------------------------------------
    return 0;
}