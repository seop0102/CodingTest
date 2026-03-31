#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 시간 복잡도를 구하는 문제
    long long n;
    cin >> n;
    // 12345 면 123 124 125 234 235 345 6개. 
    cout << n * (n-1) * (n-2) / 6 << "\n" << 3; 
    return 0;
}