#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N,vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int mm, K;
    cin >> mm >> K;
    vector<vector<int>> B(mm,vector<int>(K));
    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cin >> B[i][j];
        }
    }
    vector<vector<int>> C(N,vector<int> (K,0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0 ; j < K; j++)
        {
            for (int x = 0 ; x < M; x++)
            {
                C[i][j] += A[i][x] * B[x][j]; 
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}