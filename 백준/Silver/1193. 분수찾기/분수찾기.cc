#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int X;
    cin >> X;
    int n = 0;
    int i = 1;
    while (X>0)
    {
        X-= i;
        i++;
        n++;
    }
    int location = n + X; // 대각선에서 몇번째인지
    //분모+분자의 합은 n+1
    // n 이 홀수면 분모가 오름차순 n이 짝수면 내림차순
    int a,b;
    if (n % 2 == 0)
    {
        a = location;
        b = n - location + 1;
    } else
    {
        a = n - location + 1;
        b = location;
    }
    cout << a << "/" << b;
    // ----------------------------------------
    return 0;
}