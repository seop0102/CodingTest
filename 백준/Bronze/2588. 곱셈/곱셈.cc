#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------2588
    string A,B;
    cin >> A >> B;
    for (int i = 2 ; i >= 0; i--)
    {
        cout << stoi(A) * (B[i]-'0') << "\n";
    }
    cout << stoi(A) * stoi(B);
    // ----------------------------------------
    return 0;
}