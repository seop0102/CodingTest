#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    
    int count[8001] = {0};
    vector<int> v(N);
    
    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        sum += v[i];
        count[v[i]+4000]++;
    }
    sort(v.begin(), v.end());
    
    vector<int> p;
    int maxFreq = 0;
    for (int i = 0 ; i <= 8000; i++)
    {
        if ( maxFreq < count[i])
        {
            maxFreq = count[i]; 
            p.clear();
            p.push_back(i);
        }
        else if (maxFreq == count[i])
        {
            p.push_back(i);
        }
    }
    int many;
    if ( p.size() >= 2)
    {
        many = p[1];
    } else
    {
        many = p[0];
    }
    cout << (int)round((double)sum / N) << "\n"
    << v[N/2] << "\n" 
    << many-4000 << "\n" 
    << v[v.size()-1] - v[0] ;
    // ----------------------------------------
    return 0;
}
