#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int a = s.length();
    if ( a % 2 == 0 ) {
        return s.substr((a/2)-1,2);
    }else {
        return s.substr(a/2,1);
    }
}