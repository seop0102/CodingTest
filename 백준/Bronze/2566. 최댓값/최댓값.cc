#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> v(9, vector<int>(9, 0));
    int max = 0;
    int a = 0; 
    int b = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> v[i][j];
            if (v[i][j] > max)
            {
                max = v[i][j];
                a = i;
                b = j;
            }
        }
    }
    cout << max << "\n" << a+1 << " " << b+1;
    return 0;
}