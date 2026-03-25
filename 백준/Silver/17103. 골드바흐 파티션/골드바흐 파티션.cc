#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //에라토스테네스의 체
    bool bIsSosu[1000001];
    for (int i = 0 ; i <= 1000000; i++)
    {
        bIsSosu[i] = true;
    }
    bIsSosu[0] = false;
    bIsSosu[1] = false;
    for (int i = 2; i*i <= 1000000; i++)
    {
        if (bIsSosu[i] == true)
        {
            for (int j = i * i ; j <= 1000000 ; j+= i)
            {
                bIsSosu[j] = false;
            }
        }
    }
    int T;
    cin >> T;
    for (int t = 0 ; t < T; t++)
    {
        int N;
        cin >> N;
        int count = 0 ;
        for (int i = 2; i <= N/2; i++)
        {
            if (bIsSosu[i] == true && bIsSosu[N-i] == true)
            {
                count ++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}