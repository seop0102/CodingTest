#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, M;
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0 ; i < N ; i++)
    {
        cin >> v[i];
    }
    vector<int> sumVec;
    for (int a= 0; a< v.size()-2; a++)
    {
        for (int b = a+1; b < v.size()-1; b++)
        {
            for (int c = b+1; c < v.size(); c++)
            {
                sumVec.push_back(v[a]+v[b]+v[c]);
            }
        }
    }
    sort(sumVec.begin(), sumVec.end());
    if (sumVec.size() == 1)
    {
        cout << sumVec[0];
        return 0;
    } else
    {
        for (int k = 0 ; k < sumVec.size(); k++)
        {
            if (sumVec[k] > M)
            {
                cout <<sumVec[k-1];
                return 0;
            }
        }
        cout << sumVec[sumVec.size()-1];
    }
    
    // ----------------------------------------
    return 0;
}