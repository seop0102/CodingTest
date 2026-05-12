#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string result = "";
    int x = numLog[0];
    for (int i = 1 ; i < numLog.size() ; i++) {
        int y = numLog[i];
        int diff = y - x;
        if (diff == 1) result += "w";
        else if ( diff == -1) result += "s";
        else if (diff == 10) result += "d";
        else if (diff == -10) result += "a";
        
        x= y;
    }
    return result;
}