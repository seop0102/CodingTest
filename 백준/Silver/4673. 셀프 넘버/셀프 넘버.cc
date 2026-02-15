#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    set<int> s;
    for (int i = 1; i <= 10000; i++)
    {
        s.insert(i);
    }
    for (int i = 1; i <= 10000 ; i++)
    {
        int sum = i;
        int temp = i;
        while (temp > 0 )
        {
            sum += temp % 10;
            temp /= 10;
        }
        if ( sum <= 10000)
        {
            s.erase(sum);
        }
    }
    for (int x : s)
    {
        cout << x << "\n";
    }
    // ----------------------------------------
    return 0;
}