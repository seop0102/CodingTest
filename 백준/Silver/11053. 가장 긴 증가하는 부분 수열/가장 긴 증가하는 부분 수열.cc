#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int arr[1001] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int count[1001] = {0};

    for (int i = N - 1; i >= 0; i--)
    {
        count[i] = 1;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] < arr[j])
            {
                count[i] = max(count[i], count[j] + 1);
            }
        }
    }

    int m = 0;
    for (int i = 0; i < N; i++)
    {
        m = max(m, count[i]);
    }

    cout << m;
    return 0;
}