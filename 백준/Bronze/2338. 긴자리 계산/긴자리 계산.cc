#include <iostream>
#include <algorithm>

using namespace std;

string absAdd(string X, string Y)
{
    //양수 + 양수
    string AddResult = "";
    while (X.length() < Y.length())
    {
        X = "0" + X;
    } 
    while (Y.length() < X.length())
    {
        Y = "0" + Y;
    }
    int carry = 0;
    for (int i = X.length() - 1 ; i >= 0; i--)
    {
        int sum = (X[i] - '0') + (Y[i] - '0') + carry;
        AddResult += char(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry > 0)
    {
        AddResult += char(carry + '0');
    }
    reverse(AddResult.begin(), AddResult.end());
    
    while (AddResult.length() > 1 && AddResult[0] == '0')
    {
        AddResult.erase(0,1);
    }
    return AddResult;
}
string absSubtract(string X, string Y)
{
    // 양수 - 양수
    string SubtractResult = "";
    bool negative = false;
    if (X.length() < Y.length() || (X.length() == Y.length() && X<Y)) 
    {
        swap(X, Y);
        negative = true;
    }
    while (Y.length() < X.length())
    {
        Y = "0" + Y;
    }
    int borrow = 0;
    for (int i = X.length() - 1 ; i >= 0; i--)
    {
        int diff = (X[i] - '0') - (Y[i] - '0') - borrow;
        if (diff < 0)
        {
            diff += 10;
            borrow =1;
        } else
        {
            borrow = 0;
        }
        SubtractResult += char(diff + '0');
    }
    reverse(SubtractResult.begin(), SubtractResult.end());
    while (SubtractResult.length() > 1 && SubtractResult[0] == '0')
    {
        SubtractResult.erase(0,1);
    }
    if (negative)
    {
        SubtractResult = '-' + SubtractResult ;
    }
    return SubtractResult;
}
string absMultiply(string X, string Y)
{
    int n = X.length();
    int m = Y.length();
    string MultiplyResult(n+m,'0');
    
    for (int i = n-1 ; i >= 0 ; i--)
    {
        for (int j = m-1 ; j>=0; j--)
        {
            int mul = (X[i] - '0') * (Y[j] - '0');
            int sum = (MultiplyResult[i+j+1] - '0' ) + mul ;
            
            MultiplyResult[i + j + 1] = char(sum % 10 + '0');
            MultiplyResult[i + j] += sum / 10;
        }
    }
    while (MultiplyResult.length() > 1 && MultiplyResult[0] == '0')
    {
        MultiplyResult.erase(0,1);
    }
    return MultiplyResult;
}
string Add(string X, string Y)
{
    if (X[0] != '-' && Y[0] != '-')
    {
        // 양수 + 양수
        return absAdd(X, Y);
    } 
    if ( X[0] != '-' && Y[0] == '-')
    {
        // 양수 + 음수
        Y = Y.substr(1);
        return absSubtract(X, Y);
    } 
    if ( X[0] == '-' && Y[0] != '-')
    {
        // 음수 + 양수
        X = X.substr(1);
        return absSubtract(Y, X);
    } 
    if ( X[0] == '-' && Y[0] == '-')
    {
        // 음수 + 음수
        X = X.substr(1);
        Y = Y.substr(1);
        return "-" + absAdd(X,Y);
    }
}
string Subtract(string X, string Y)
{
    if (Y[0] == '-')
    {
        Y = Y.substr(1);
    } else
    {
        Y = "-" + Y;
    }
    return Add(X, Y);
}
string Multiply(string X, string Y)
{
    if (X[0] != '-' && Y[0] != '-')
    {
        // 양수 * 양수
        return absMultiply(X, Y);
    } 
    if ( X[0] != '-' && Y[0] == '-')
    {
        // 양수 * 음수
        Y = Y.substr(1);
        string result = absMultiply(X, Y);
        if (result == "0") return "0";
        return "-" + result;
    } 
    if ( X[0] == '-' && Y[0] != '-')
    {
        // 음수 * 양수
        X = X.substr(1);
        string result = absMultiply(X, Y);
        if (result == "0") return "0";
        return "-" + result;
    } 
    if ( X[0] == '-' && Y[0] == '-')
    {
        // 음수 * 음수
        X = X.substr(1);
        Y = Y.substr(1);
        return absMultiply(X, Y);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string A,B;
    cin >> A >> B;
    cout << Add(A,B) << "\n";
    cout << Subtract(A,B) << "\n";
    cout << Multiply(A,B);
    // ----------------------------------------
    return 0;
}