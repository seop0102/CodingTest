#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int C;
    cin >> C;
    for (int i = 0; i < C; i++)
    {
        cout.precision(3);
        cout << fixed;
        int N;
        cin >> N;
        double average = 0.0 ;
        vector<int> v(N);
        for (int j = 0; j < N; j++)
        {
            cin >> v[j];
            average += v[j];
        }
        average /= N;
        double count = 0;
        for (int j = 0; j < N; j++)
        {
            if ( v[j] > average)
            {
                count++;
            }
        }
        cout << (count/N) * 100 <<"%\n";
    }
    // ----------------------------------------
    return 0;
}