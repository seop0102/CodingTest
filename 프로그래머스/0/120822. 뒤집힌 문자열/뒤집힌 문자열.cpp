#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    vector<char> arr;
    for(char c : my_string) {
        arr.push_back(c);
    }
    string answer = "";
    for(int i = arr.size() -1; i>=0; i--){
        answer += arr[i];
    }
    return answer;
}