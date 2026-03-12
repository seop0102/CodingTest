#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a = 0; 
    int b = 0; 
    int index = s.find('x');
    if ( s.find('x') != string::npos && isdigit(s[s.length()-1]))
    { 
        if ( s[0] == 'x') a = 1; 
        else if ( s[0] == '-' && index == 1) a = -1;
        else a = stoi(s.substr(0, index));
        b = stoi (s.substr(index + 1));
    } else {
        if (s[s.length()-1] == 'x')
        {
            if (s[0] == 'x') a = 1;
            else if (s[0] == '-' && index == 1 ) a = -1; 
            else a = stoi(s.substr(0, s.length()-1)); 
            b = 0;
        } else {
            a = 0;
            b = stoi(s); 
        }
    }
    string answer = "";
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
    else if (a != 0 && b == 0)
    {
        if ( a/2 == 1) answer = "";
        else if ( a/2 == -1) answer = "-";
        else answer = to_string(a/2);
        answer += "xx+W";
    }
    else if (a == 0 && b != 0)
    {
        if ( b == 1) answer = "";
        else if (b == -1 ) answer = "-";
        else answer = to_string(b);
        answer += "x+W";
    }
    else answer = "W";
    cout << answer;
    return 0;
}