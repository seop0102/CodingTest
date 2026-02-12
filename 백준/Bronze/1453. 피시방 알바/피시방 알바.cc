#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    vector<int> v(101, 1);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if ( v[a] == 1)
        {
            v[a]--;
        } else
        {
            sum ++;
        }
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}