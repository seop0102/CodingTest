#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, T, P;
    cin >> N;
    vector<int> arr(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cin >> T >> P;
    int Tsum = 0;
    for (int j = 0 ; j < 6; j++)
    {
        Tsum += arr[j]/T;
        if (arr[j]%T > 0)
        {
            Tsum += 1;
        }
    }
    int Psum = N/P;
    int Pextra = N%P;
    cout << Tsum << "\n" << Psum << " " << Pextra;
    // ----------------------------------------
    return 0;
}