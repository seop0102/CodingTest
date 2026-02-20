#include <algorithm>
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
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        int left = 0;
        int right = v.size()-1;
        bool bIsFound = false;
        while (left <= right)
        {
            int mid = left + (right - left)/2;
            if (v[mid] == x)
            {
                bIsFound = true;
                break;
            } else if (v[mid] < x)
            {
                left = mid + 1;
            } else
            {
                right = mid - 1;
            }
        }
        if (bIsFound == true)
        {
            cout << 1 << "\n";
        } else
        {
            cout << 0 << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}
