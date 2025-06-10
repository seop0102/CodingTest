#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int size = food.size()-1;
    for(int i = 1 ; i <=size ; i++) {
        for(int j = 0; j<food[i]/2 ; j++) {
            answer += to_string(i);
        }
    }
    string flip = answer;
    sort(flip.begin(), flip.end(), greater<int>());
    answer += "0";
    answer += flip;
                    
    return answer;
}