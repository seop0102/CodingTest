#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    time_t t = time(nullptr);
    tm *nowLocalTime = localtime(&t);
    cout << nowLocalTime->tm_year + 1900 << "\n"; 
    
    if (nowLocalTime->tm_mon+1 < 10) 
    {
        string s = "0" + to_string(nowLocalTime->tm_mon+1); 
        cout << s << "\n";
    } 
    else 
    {
        cout << nowLocalTime->tm_mon+1 << "\n";
    }
    cout << nowLocalTime->tm_mday << "\n";
    // ----------------------------------------
    return 0;
}