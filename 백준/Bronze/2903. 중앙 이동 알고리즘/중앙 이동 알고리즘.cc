#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        count *= 2;
    }
    cout << (count+1)*(count+1);
    return 0;
}