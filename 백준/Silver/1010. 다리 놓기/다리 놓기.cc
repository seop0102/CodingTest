#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N,M;
        cin>>N>>M;
        N = min(N,M-N);
        long long mul = 1;
        long long div = 1;
        for (int i= 0; i < N ; i++)
        {
            mul *= M-i;
            div *= (i+1);
        }
        cout << mul/div << "\n";
    }
    // ----------------------------------------
    return 0;
}