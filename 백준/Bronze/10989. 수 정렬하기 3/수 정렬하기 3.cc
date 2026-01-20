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
    vector<int> v(10001,0);
    for (int i = 0; i < N; i++)
    {
        int a;
        cin>>a;
        v[a]++;
    }
    for (int j = 1 ; j <=10000; j++)
    {
        for (int k = 0 ; k<v[j]; k++)
        {
            cout <<j << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}