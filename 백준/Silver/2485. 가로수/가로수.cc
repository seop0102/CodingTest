#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a%b;
        a= b;
        b=r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    vector<int> gVec;
    int g = v[1] - v[0];
    for (int i = 1; i < N; i++)
    {
        g = gcd(v[i]-v[i-1], g);
    }
    int len = v[N-1] - v[0];
    int total = len / g;
    cout << total - N +1;
    //입력되는 수 최대 10억
    return 0;
}