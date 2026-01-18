#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int H,W,N;
        cin >> H >> W >> N;
        int floor = 0;
        int room = 1;
        while (N>H)
        {
            N-=H;
            room++;
        }
        floor = N;
        if (room < 10 )
        {
            cout<<to_string(floor)<<"0"<<to_string(room)<<"\n";
        } else
        {
            cout << to_string(floor)<<to_string(room)<<"\n";
        }
    }
    // ----------------------------------------
    return 0;
}