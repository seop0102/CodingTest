#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    } // {4,3,6,8, 7,5,2,1}, {1 2 5 3 4}
    int num = 1;
    stack<int> s;
    vector<char> c;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        while (num <= x) // num 이 x 이하일 때까지는 무조건 스택에 push
        {
            s.push(num);
            c.push_back('+');
            num ++;
        }
        bool bFound = false;
        while (!s.empty())
        {
            if (s.top ()== x)
            {
                bFound = true;
                s.pop();
                c.push_back('-');
                break;
            } else
            {
                s.pop();
                c.push_back('-');
            }
        }
        if (!bFound)
        {
            cout << "NO";
            return 0;
        }
    }
    for (char y : c)
    {
        cout << y << '\n';
    }
    // ----------------------------------------
    return 0;
}
