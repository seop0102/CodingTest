#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string N;
    int B;
    cin >> N >> B;
    long long sum = 0;
    for (int i = 0; i < N.length(); i++)
    {
        long long temp = 1;
        for (int j = 0; j < N.length()-i-1 ; j++)
        {
            temp *= B; 
        }
        if ( '0' <= N[i] && N[i] <= '9')
        {
            sum += temp * (N[i]-'0');
        } else
        {
            sum += temp * (N[i]-'A'+10);
        }
    }
    cout << sum;
    return 0;
}