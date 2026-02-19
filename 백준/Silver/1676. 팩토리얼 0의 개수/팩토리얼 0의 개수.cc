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
    int count = 0;
    for (int i = 1 ; i <= N; i++)
    {
        int temp = i;
        while ( temp % 5 == 0)
        {
            count ++;
            temp /= 5;
        }
    }
    cout <<count;
    // ----------------------------------------
    return 0;
}
