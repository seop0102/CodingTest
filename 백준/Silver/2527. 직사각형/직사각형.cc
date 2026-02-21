#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct square
{
    int x,y,p,q;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    for (int t = 0 ; t < 4 ; t++)
    {
        vector<square> squares(2);
        for (int i = 0 ; i < 2; i++)
        {
            cin >> squares[i].x >> squares[i].y >> squares[i].p >> squares[i].q;
        }
        sort(squares.begin(), squares.end(), [](square s1, square s2)
        {
            return s1.x < s2.x;
        });
        int Xdiff = squares[0].p - squares[1].x;
        
        if (squares[0].y > squares[1].y)
        {
            swap(squares[0], squares[1]);
        }
        int Ydiff = squares[0].q - squares[1].y;
        
        if (Xdiff < 0 )
        {
            cout << "d\n";
        } else if ( Xdiff == 0)
        {
            if (Ydiff < 0 )
            {
                cout << "d\n";
            } else if (Ydiff == 0)
            {
                cout << "c\n";
            } else
            {
                cout << "b\n";
            }
        } else
        {
            if (Ydiff < 0 )
            {
                cout << "d\n";
            } else if (Ydiff == 0)
            {
                cout << "b\n";
            } else
            {
                cout << "a\n";
            }
        }
    }
    // ----------------------------------------
    return 0;
}
