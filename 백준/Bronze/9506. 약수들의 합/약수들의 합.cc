#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    while ( cin >> n ) 
    {
        if ( n == -1)
        {
            return 0;
        }
        int sum = 0;
        vector<int> yaksu;
        for (int i = 1; i < n; i++)
        {
            if (n%i == 0)
            {
                yaksu.push_back(i);
                sum += i;
            } else
            {
                continue;
            }
        }
        if ( sum == n)
        {
            cout << n << " = ";
            for (int i = 0; i < yaksu.size()-1; i++)
            {
                cout << yaksu[i] << " + ";
            }
            cout << yaksu[yaksu.size()-1];
        } else
        {
            cout << n << " is NOT perfect.";
        }
        yaksu.clear();
        cout << "\n";
    }
    return 0;
}