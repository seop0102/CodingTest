#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 0 ; i <= n; i++)
    {
        if (i == 0)
        {
            a[i]=0;
        } 
        else if ( i ==1)
        {
            a[i]=1;
        } 
        else
        {
            a[i] = a[i-1]+a[i-2];
        } 
    }
    cout << a[n];
    // ----------------------------------------
    return 0;
}