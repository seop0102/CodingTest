#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    // 맥주, 몰트, 와인, 탄산, 셀처, 물
    // 병당 5센트씩 돌려줌. 총 얼마 받는지 계산하기
    int A;
    int sum = 0;
    while (cin >> A)
    {
        sum += A;
    }
    cout << sum * 5;
    // ----------------------------------------
    return 0;
}