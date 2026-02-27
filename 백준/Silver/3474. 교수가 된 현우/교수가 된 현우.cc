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
        long long n ;
        cin >> n;
        long long count = 0;
        while ( n > 0)
        {
            n /= 5;
            count += n;
        } 
        cout << count << "\n";
    }
    // ----------------------------------------
    return 0;
}
