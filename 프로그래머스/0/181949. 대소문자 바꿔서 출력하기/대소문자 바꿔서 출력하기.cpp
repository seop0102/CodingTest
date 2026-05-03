#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    for (int i = 0 ; i < s.length() ; i ++) {
        if ( s[i] - 'a' >= 0 && s[i] - 'a' <= 25 ) {
            cout << char(s[i] - 'a' + 'A');
        } else {
            cout << char(s[i] - 'A' + 'a');
        }
    }
    return 0;
}