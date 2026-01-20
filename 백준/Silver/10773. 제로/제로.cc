#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int K;
    cin>>K;
    vector<int> v(K);
    for (int i = 0 ; i < K ; i++)
    {
        int a;
        cin>>a;
        if (a!=0)
        {
            v.push_back(a);
        } else
        {
            v.pop_back();
        }
    }
    int sum = 0;
    for (int i = 0 ; i< v.size() ; i++)
    {
        sum += v[i];
    }
    cout <<sum;
    // ----------------------------------------
    return 0;
}