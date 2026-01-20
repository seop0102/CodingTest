#include <algorithm>
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
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    float max = (float)v[v.size()-1];
    float sum = 0;
    cout.precision(5);
    cout<<fixed;
    for (int j = 0 ; j < N ; j++)
    {
        float temp = (float)v[j]/max*100;
        sum += temp;
    }
    cout << sum/float(N);
    // ----------------------------------------
    return 0;
}