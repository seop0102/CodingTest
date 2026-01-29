#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string a,b,c;
    cin >> a >> b >> c;
    int answer;
    if ( isdigit(a[0]) )
    {
        answer = stoi(a) + 3;
    } else if ( isdigit(b[0]) )
    {
        answer = stoi(b) + 2;
    } else if ( isdigit(c[0]) )
    {
        answer = stoi(c) + 1;
    }
    if (answer % 3 == 0 && answer % 5 == 0)
    {
        cout << "FizzBuzz";
    } else if (answer % 3 == 0)
    {
        cout << "Fizz";
    } else if (answer % 5 == 0)
    {
        cout << "Buzz";
    } else
    {
        cout << answer;
    }
    // ----------------------------------------
    return 0;
}