#include <iostream>

using namespace std;

int count1 = 0 ;
int count2 = 0 ;

int fib(int n)
{
    if ( n == 1 || n ==2)
    {
        count1++;
        return 1;
    } else
    {
        return fib(n-1) + fib(n-2);
    }
}
int fibonacci(int n)
{
    int f[41];
    f[1] = 1;
    f[2] = 2;
    for (int i = 3 ; i <= n ; i++)
    {
        count2++;
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << count1 << " " << count2;
    return 0;
}
