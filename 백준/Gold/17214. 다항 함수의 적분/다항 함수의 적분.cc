#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string s;
    cin >> s;
    
    int a = 0; // x계수
    int b = 0; // 상수
    int index = s.find('x');
    
    if ( s.find('x') != string::npos && isdigit(s[s.length()-1])) // ax+b
    { 
        if ( s[0] == 'x') a = 1; // x+b
        else if ( s[0] == '-' && index == 1) a = -1; // -x+b
        else a = stoi(s.substr(0, index));
        b = stoi (s.substr(index + 1));
    } 
    else // !ax+b
    {
        if (s[s.length()-1] == 'x') // ax
        {
            if (s[0] == 'x') a = 1; // x
            else if (s[0] == '-' && index == 1 ) a = -1; // -x
            else a = stoi(s.substr(0, s.length()-1)); // 10x
            b = 0;
        } 
        else // b
        {
            a = 0;
            b = stoi(s); // 1 -1 0 10
        }
    }
    //cout << a << b << endl;
    string answer = "";
    /*
    -- tc 7 --
    2x+1
    xx+x+W (xx+1x+W)

    -- tc 8 --
    -2x-1
    -xx-x+W (-1xx-1x+W)

    -- tc 9 --
    -1
    -x+W (-1x+W)
    */
    if (a != 0 && b != 0) // ax + b
    {
        if (a/2 == 1) answer = "xx";
        else if ( a/2 == -1) answer = "-xx";
        else answer = to_string(a/2) + "xx";
        if ( b > 0 )
        {
            answer += "+";
            if ( b != 1) answer += to_string(b) ;
        } else
        {
            if ( b == -1) answer += "-";
            else answer += to_string(b);
        }
        answer += "x+W";
    }
    else if (a != 0 && b == 0) // ax
    {
        if ( a/2 == 1) answer = "";
        else if ( a/2 == -1) answer = "-";
        else answer = to_string(a/2);
        answer += "xx+W";
    }
    else if (a == 0 && b != 0) // b
    {
        if ( b == 1) answer = "";
        else if (b == -1 ) answer = "-";
        else answer = to_string(b);
        answer += "x+W";
    }
    else answer = "W";
    cout << answer;
    // ----------------------------------------
    return 0;
}