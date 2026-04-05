#include <iostream>

using namespace std;

int N, M;
int arr[8];

void back(int index)
{
    if (index == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for (int i = 1; i <= N; i++)
    {
        arr[index] = i;
        back(index+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    back(0);
    return 0;
}
