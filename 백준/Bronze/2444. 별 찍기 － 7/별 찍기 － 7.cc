#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int blank = (2*n-1)/2;
    //예제는 별 뒤에 공백이 없다
    for (int i = 0 ; i < 2 * n - 1 ; i++)
    {
        for (int j = 0; j < blank; j++)
        {
            cout << " ";
        }
        for (int j = 0 ; j < (2*n-1) - 2*blank; j++)
        {
            cout << "*";
        }
        cout << endl;
        if ( i < (2*n-1)/2 )
        {
            blank--;
        } else
        {
            blank++;
        }
    }
    
    return 0;
}