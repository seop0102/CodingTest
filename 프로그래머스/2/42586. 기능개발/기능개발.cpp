#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int num = 0;
    while (progresses.size() > 0 ) {
        if ( progresses[0] >= 100 ) {
            num++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }else {
            if ( num > 0 ) {
                answer.push_back(num);
                num = 0;
            }
            for (int i = 0 ; i < progresses.size() ; i++) {
                progresses[i] += speeds[i];
            }
        }
    }
    if ( num > 0 ) {
        answer.push_back(num);
    }
    return answer;
}