#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int sum = 0;
    vector<int> add(N);
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        sum += x;
        add[i] =  sum;
    }
    for (int i = 0; i < M; i++)
    {
        int a,b;
        cin >> a >> b;
        // 5 9 12 14 15
        // 0 = 5
        // 1 = 9 - 5
        // 1~3 5 4 3 b~a-1
        if ( a == 1)
        {
            cout << add[b-1] << "\n";
        } else
        {
            cout << add[b-1] - add[a-2] << "\n";
        }
    }
    return 0;
}
