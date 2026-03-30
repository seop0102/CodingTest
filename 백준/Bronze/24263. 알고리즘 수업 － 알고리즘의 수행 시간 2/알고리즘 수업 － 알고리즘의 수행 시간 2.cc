#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 시간 복잡도를 구하는 문제
    int n;
    cin >> n;
    // for 문 1부터 n 까지 돌려서 sum에 더하는 코드 = O(N);
    cout << n << "\n" << 1;
    return 0;
}