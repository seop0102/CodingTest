#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int price;
    cin >> price;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        int A,B;
        cin >> A >> B;
        sum += A*B;
    }
    cout << (sum == price ? "Yes" : "No");
    // ----------------------------------------
    return 0;
}