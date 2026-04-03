#include <iostream>

using namespace std;

int N, M;
int arr[9];
bool isVisited[9];

void backtracking (int currentSize)
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
    
    for (int i = 1 ; i <= N; i++)
    {
        if ( !isVisited[i] )
        {
            isVisited[i] = true;
            arr[currentSize] = i;
            backtracking(currentSize + 1);
            isVisited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    backtracking(0);
    return 0;
}
