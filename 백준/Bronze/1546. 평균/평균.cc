#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<int> v(N);
    int maxnum = -1;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        maxnum = max(v[i],maxnum);
    }
    float sum = 0;
    cout.precision(5);
    cout<<fixed;
    for (int j = 0 ; j < N ; j++)
    {
        float temp = (float)v[j]/maxnum*100;
        sum += temp;
    }
    cout << sum/float(N);
    // ----------------------------------------
    return 0;
}