#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string A,B;
    cin >> A >> B;
    string result = "";
    while (A.length() < B.length())
    {
        A = "0" + A;
    }
    while (B.length() < A.length())
    {
        B = "0" + B;
    }
    int carry = 0;
    for (int i = A.length() - 1 ; i>=0; i-- )
    {
        int sum = (A[i] - '0') + (B[i] - '0') + carry;
        result += char(sum%10 +'0');
        carry = sum / 10;
    }
    if (carry > 0)
    {
        result += char(carry + '0');
    }
    reverse(result.begin(), result.end());
    while  (result.length() > 1 && result[0] == '0')
    {
        result.erase(0,1);
    }
    cout << result;
    // ----------------------------------------
    return 0;
}
