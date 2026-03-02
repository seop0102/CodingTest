#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, M;
    cin >> N >> M;
    vector<string> chess(N);
    int answer = 2500 ;
    for (int i = 0; i < N; i++)
    {
        cin >> chess[i];
    }
    for (int i = 0; i <= N-8 ; i++)
    {
        for (int j = 0; j <= M-8; j++)
        {
            int change = 0;
            for (int a = 0; a<8; a++)
            {
                for (int b = 0; b<8; b++)
                {
                    if ((a+b)%2 == 0)
                    {
                        // WBWB 경우만 세기, BWBW경우는 64-change
                        if (chess[i+a][j+b] != 'W')
                        {
                            change++;
                        } 
                    }
                    else
                    {
                        if (chess[i+a][j+b] != 'B')
                        {
                            change++;
                        }
                    }
                }
            }
            answer = min(answer ,min(change, 64 -change));
        }
    }
    cout << answer;
    // ----------------------------------------
    return 0;
}
