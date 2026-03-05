#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n , m;
    cin >> n >> m;
    m = min (m, n-m);
    long long two = 0;
    long long five = 0;
    //분자 n ~ n-m 사이의 2와 5의 갯수
    int temp = n;
    while (temp>0)
    {
        temp/=2;
        two += temp;
    }
    temp = n;
    while (temp>0)
    {
        temp/=5;
        five += temp;
    }
    int temp2 = n-m;
    while (temp2 > 0)
    {
        temp2 /= 2;
        two -= temp2;
    } temp2 = n-m;
    while (temp2 > 0)
    {
        temp2 /= 5;
        five -= temp2;
    }
    // 분모
    int temp3 = m;
    while (temp3 > 0)
    {
        temp3 /= 2;
        two -= temp3;
    } temp3 = m;
    while (temp3 > 0)
    {
        temp3 /= 5;
        five -= temp3;
    }
    cout << min(two,five);
    // ----------------------------------------
    return 0;
}
