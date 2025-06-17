#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> num;
    string a = "";
    
    for (char c : s) {
        if ( c != ' ') {
            a += c;
        }else {
            if ( !a.empty()) {
                num.push_back(stoi(a));
                a= "";
            }
        }
    }
    if (!a.empty()) num.push_back(stoi(a)); 
    int minnum = num[0];
    int maxnum = num[0];
    for (int i =1; i<num.size(); ++i) {
        if( num[i] < minnum ) {
            minnum = num[i];
        } 
        if ( num [i] > maxnum ) {
            maxnum = num[i];
        }
    }
    answer = to_string(minnum) + " " + to_string(maxnum);
    return answer;
}