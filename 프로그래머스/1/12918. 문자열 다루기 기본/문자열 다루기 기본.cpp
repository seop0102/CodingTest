#include <string>

using namespace std;

bool solution(string s) {
    
    int a = s.length();
    if ( a!=4 && a!=6) {
        return false;
    }
    for (char c : s) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}