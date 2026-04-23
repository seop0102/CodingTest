#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0 ; i< N ; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int answer = 0;
    for (int i = 0 ; i< N ; i++)
    {
        answer = max(answer,v[i]*(N-i));
    }
    cout << answer;
    return 0;
}