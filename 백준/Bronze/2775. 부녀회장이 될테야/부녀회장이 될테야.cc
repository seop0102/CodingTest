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

        int k, n;

        cin >> k >> n;

        vector<vector<int>> arr(k+1, vector<int>(n+1));

        for (int i = 1 ; i<= n ; i ++)

        {

            arr[0][i] = i;

        }

        for (int a = 1; a <= k ; a++)

        {

            for (int b = 1; b <= n; b++)

            {

                arr[a][b] = arr[a][b-1] + arr[a-1][b];

            }

        }

        cout << arr[k][n] << "\n";

    }

    // ----------------------------------------

    return 0;

}