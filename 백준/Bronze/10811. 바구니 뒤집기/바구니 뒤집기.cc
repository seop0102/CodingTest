#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N , M;
    cin >> N >> M;
    vector<int> v;
    for (int i = 1 ; i <= N ; i++)
    {
        v.push_back(i);
    } // {1 2 3 4 5}
    for (int i = 0; i < M; i++)
    {
        int x,y;
        cin >> x >> y;
        // 1 2 면 [0] [1] 바꾸기
        reverse(v.begin()+x-1, v.begin()+y );
    }
    for (int i = 0 ; i < N ; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}