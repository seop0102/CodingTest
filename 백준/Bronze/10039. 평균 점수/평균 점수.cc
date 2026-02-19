#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        int A;
        cin >> A;
        if (A < 40)
        {
            sum += 40;
        } else
        {
            sum += A;
        }
    }
    cout << sum / 5 ;
    // ----------------------------------------
    return 0;
}
