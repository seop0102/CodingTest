#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int C;
        cin >> C;
        int arr[4] = {25, 10, 5, 1};
        vector<int> v;
        for (int i = 0 ; i < 4 ; i++)
        {
            int sum = C/arr[i];
            v.push_back(sum);
            C %= arr[i];
        }
        for (int j : v)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    // ----------------------------------------
    return 0;
}
