#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    int B;
    cin >> N >> B;
    string s ="";
    while (N>0)
    {
        int r = N % B;
        if ( r < 10)
        {
            s = to_string(r) + s;
        } else
        {
            s = char( r - 10 + 'A' ) + s;
        }
        N /= B;
    }
    cout << s;
    return 0;
}