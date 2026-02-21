#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    set<int> s;
    int sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        int a;
        cin >> a;
        sum += a;
        s.insert(a);
    }
    if (sum == 180)
    {
        if (s.size() == 1) cout << "Equilateral";
        else if (s.size() == 2) cout << "Isosceles";
        else cout << "Scalene";
    } else
    {
        cout << "Error";
    }
    // ----------------------------------------
    return 0;
}
