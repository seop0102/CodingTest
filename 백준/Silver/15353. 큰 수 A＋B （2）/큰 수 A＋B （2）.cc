#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ---------------------------------------- 22941
    string A,B;
    cin >> A >> B;
    while ( A.length() != B.length())
    {
        if (A.length() > B.length()) 
        {
            B = "0" + B;
        }
        if (A.length() < B.length())
        {
            A = "0" + A;
        }
    }
    string answer = "";
    int temp = 0;
    for (int i = A.length()-1 ; i >= 0 ; i--)
    {
        int x = (A[i] - '0') + (B[i] - '0') + temp;
        answer += to_string(x%10);
        temp = x/10;
    }
    if (temp > 0 )
    {
        answer += to_string(temp);
    }
    reverse(answer.begin(), answer.end());
    cout << answer;
    // ----------------------------------------
    return 0;
}
