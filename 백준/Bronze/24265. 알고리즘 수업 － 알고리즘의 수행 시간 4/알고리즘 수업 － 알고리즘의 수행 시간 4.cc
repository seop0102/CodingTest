#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 시간 복잡도를 구하는 문제
    // 1 ~ n-1 && i+1 to n 
    long long n;
    cin >> n;
    cout << n * (n-1) / 2 << "\n" << 2;
    return 0;
}