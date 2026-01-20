#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N,K;
    cin>>N>>K;
    K = min(K,N-K);
    int mul = 1;
    int div = 1;
    for (int i= 0; i < K ; i++)
    {
        mul *= N-i;
        div *= (i+1);
    }
    cout << mul/div;
    // ----------------------------------------
    return 0;
}