#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N , M;
    cin >> N >> M;
    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        v.push_back(i);
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        int temp = v[a-1];
        v[a-1] = v[b-1];
        v[b-1] = temp;
    }
    for (int i = 0 ; i < N; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}