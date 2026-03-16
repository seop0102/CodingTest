#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[201] = {0};
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr[x+100]++;
    }
    int v;
    cin >> v;
    cout << arr[v+100];
    
    return 0;
}