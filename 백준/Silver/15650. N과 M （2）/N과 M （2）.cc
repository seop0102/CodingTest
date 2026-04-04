#include <iostream>

using namespace std;

int N, M;
int arr[9];

void backtracking (int currentSize, int start)
{
    if ( currentSize == M)
    {
        for (int i = 0 ; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for (int i = start ; i <= N; i++)
    {
        arr[currentSize] = i;
        backtracking(currentSize + 1, i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    backtracking(0, 1);
    return 0;
}
