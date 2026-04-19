#include <iostream>
#include <string>

using namespace std;

void Hanoi(int n, int from, int via, int to)
{
    if ( n == 1)
    {
        cout << from << " " << to << "\n";
        return;
    }
    Hanoi(n-1, from, to, via);
    cout << from << " " << to << "\n";
    Hanoi(n-1,via,from,to);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    //이동횟수 2 n승 -1
    int sum = 1;
    for (int i = 1; i <= N; i++)
    {
        sum *= 2;
    }
    cout << sum -1 << "\n";
    Hanoi(N,1,2,3);
    return 0;
}