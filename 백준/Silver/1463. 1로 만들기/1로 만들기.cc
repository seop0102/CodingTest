#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<int> v(N+1);
    for (int i = 2; i <= N; i++)
    {
        v[i] = v[i-1] + 1;
        
        if (i%2 == 0)
        {
            v[i] = min(v[i], v[i/2]+1);
        } if ( i%3 == 0)
        {
            v[i] = min(v[i], v[i/3]+1);
        }
    }
    cout << v[N];
    // ----------------------------------------
    return 0;
}
