#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin>>N;
    if (N==1)
    {
        cout << 1;
        return 0;
    }
    vector<int> arr(100000);
    arr[0] = 1;
    int x= 1;
    while (true)
    {
        arr[x] = arr[x-1] + 6*x;
        if ( N >=(arr[x-1]+1)&& N<=arr[x] )
        {
            cout << x+1;
            return 0;
        } else
        {
            x++;
        }
    }
    
    // ----------------------------------------
    return 0;
}