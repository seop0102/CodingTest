#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N ;
    cin >> N;
    int num = 0;
    int i = 666;
    while (true)
    {
        if (to_string(i).find("666") != string::npos)
        {
            num ++;
            if (num == N)
            {
                cout << i;
                break;
            }
        }
        i++;
    }
    // ----------------------------------------
    return 0;
}
