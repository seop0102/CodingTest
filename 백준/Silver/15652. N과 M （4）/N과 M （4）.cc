#include <iostream>

using namespace std;

int N, M;
int arr[9];

void back(int index, int start)
{
    if (index == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }cout << "\n";
        return;
    }
    for (int i = start; i <= N; i++)
    {
        arr[index] = i;
        back(index+1, i);
    } 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    back(0, 1);
    return 0;
}
