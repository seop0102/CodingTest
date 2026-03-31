#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 시간 복잡도를 구하는 문제
    long long n;
    cin >> n;
    // 이중 for 문을 돌려서 sum에 i*j를 더하는 코드 
    // 시간 복잡도 O(N^2)
    // 수행 횟수랑 최고차항의 차수
    cout << n * n << "\n" << 2;
    return 0;
}