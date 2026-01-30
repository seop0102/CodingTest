#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct member
{
    int index;
    int age;
    string name;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<member> v;
    for (int i = 1 ; i <= N ; i ++)
    {
        int a;
        string s;
        cin >> a >> s;
        v.push_back({i, a, s});
    }
    sort(v.begin(), v.end(), [] (const member& x, const member& y)
    {
        if (x.age == y.age)
        {
            return x.index < y.index;
        } return x.age < y.age;
    });
    for (int i = 0 ; i < N ; i ++)
    {
        cout << v[i].age <<" " << v[i].name<<"\n";
    }
    // ----------------------------------------
    return 0;
}