#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int X;
    cin >> X;
    //2진수로 만들어서 1의 갯수 세기
    vector<int> v;
    while ( X > 0)
    {
        v.push_back(X%2);
        X/=2;
    }
    int sum = 0;
    for (int i = 0 ; i<v.size(); i++)
    {
        if (v[i] == 1)
        {
            sum ++;
        }
    }
    cout << sum;
    // ----------------------------------------
    return 0;
}