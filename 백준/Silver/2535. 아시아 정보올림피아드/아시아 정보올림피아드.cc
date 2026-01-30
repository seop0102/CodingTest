#include <algorithm>
#include <iostream>
#include <vector>

// 2535
using namespace std;

struct S
{
    int countryNum;
    int studentNum;
    int score;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<S> v;
    for (int i = 0 ; i < N ; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    sort(v.begin(), v.end(), [] (const S& a, const S& b)
    {
        return a.score > b.score;
    });
    vector<int> arr(101, 2);
    cout << v[0].countryNum << " " << v[0].studentNum << "\n";
    cout << v[1].countryNum << " " << v[1].studentNum << "\n";
    arr[v[0].countryNum]--;
    arr[v[1].countryNum]--;
    for (int i = 2 ; i < N ; i++)
    {
        if (arr[v[i].countryNum] > 0)
        {
            cout << v[i].countryNum << " " << v[i].studentNum;
            break;
        }
    }
    // ----------------------------------------
    return 0;
}