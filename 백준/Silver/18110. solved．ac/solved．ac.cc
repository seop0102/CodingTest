#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    if ( n == 0)
    {
        cout << 0;
        return 0;
    }
    int aver = round(n* 0.15);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort (v.begin(), v.end());
    long long sum = 0;
    for (int i = aver ; i < v.size() - aver; i++)
    {
        sum += v[i];
    }
    cout << round((sum*1.0)/(v.size()-(2*aver)));
    // ----------------------------------------
    return 0;
}
