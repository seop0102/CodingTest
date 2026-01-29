#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    string s;
    cin >> N >> s;
    long long sum = 0;
    long long t = 1;
    for (int i = 0; i < s.length(); i++)
    {
        sum += (t * (s[i]-'a'+1)) % 1234567891;
        t = (t * 31) % 1234567891;
    }
    cout << sum % 1234567891;
    // ----------------------------------------
    return 0;
}