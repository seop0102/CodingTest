#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    
    int arr[100][100] = {0};
    for (int i = 0 ; i < n ; i ++ )
    {
        int x,y;
        cin >> x >> y;
        for (int a = x; a < x+10; a++)
        {
            for (int b= y; b < y+10; b++)
            {
                arr[a][b]++;
            }
        }
    }
    int sum = 0;
    for (int i = 0 ; i <100; i++)
    {
        for (int j = 0 ; j<100; j++)
        {
            if (arr[i][j] > 0)
            {
                sum ++;
            }
        }
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}
