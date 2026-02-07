#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    // n <= 10^18라서 최대 필요 비트는 60인데 64면 무조건 커버된다 그리고 long long 범위 이내라 string 안써도 됨
    long long n;
    cin >> n;
    
    // {1,2,4,8,16,32,64}
    vector<int> v;
    int t = 1;
    for (int i = 1 ; i <= 7 ; i++)
    {
        v.push_back(t);
        t *= 2;
    } 
    
    // 2진수로 바꿔서 비트 개수 세기
    int count = 0;
    while ( n > 0 )
    {
        count++;
        n /= 2;
    }
    
    int answer = 0;
    for (int i = 0; i<7 ; i++)
    {
        if (count <= v[i])
        {
            answer = v[i];
            break;
        }
    }
    
    if (answer == 1)
    {
        cout << "1 bit";
    } else
    {
        cout << answer << " bits";
    }
    // ----------------------------------------
    return 0;
}