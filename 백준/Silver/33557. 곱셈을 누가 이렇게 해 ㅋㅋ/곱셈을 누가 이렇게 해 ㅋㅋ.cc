#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

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
        string A, B;
        cin >> A >> B;
        long long ans = stoll(A) * stoll(B);
        string ansStr = to_string(ans);
        
        while (A.length() != B.length())
        {
            if (A.length() > B.length())
            {
                B = "1" + B;
            } 
            if (A.length() < B.length())
            {
                A = "1" + A;
            }
        }
        string temp = "";
        for (int i = 0 ; i < A.length(); i++)
        {
            temp += to_string((A[i] -'0') * (B[i] - '0')) ;
        }
        if (temp == ansStr)
        {
            cout << 1 << "\n";
        } else
        {
            cout << 0 << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}
