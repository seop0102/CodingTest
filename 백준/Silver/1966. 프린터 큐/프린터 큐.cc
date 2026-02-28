#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        queue<int> q;
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int count = 0;
        while (true)
        {
            int currentSize = q.size();
            int temp = q.front();
            q.pop();
            bool bIsBig = false;
            for (int i = 0 ; i < currentSize-1 ; i++)
            {
                int current = q.front();
                q.pop();
                if (current > temp)
                {
                    bIsBig = true;
                }
                q.push(current);
            }
            if (bIsBig)
            {
                q.push(temp);
                if ( M == 0)
                {
                    M = q.size()-1;
                } else
                {
                    M--;
                }
            } else
            {
                count ++;
                if (M==0)
                {
                    cout << count << "\n";
                    break;
                } else
                {
                    M--;
                }
            }
        }
    }
    // ----------------------------------------
    return 0;
}
