#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin>>N;
    for (int i = 0 ; i < N ; ++i)
    {
        int sum = i;
        int x = i;
        while ( x != 0 )
        {
            sum += x%10;
            x /= 10;
        }
        if (sum == N)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    // ----------------------------------------
    return 0;
}