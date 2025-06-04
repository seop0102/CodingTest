#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> arr[201];
    for (int i =0; i< numbers.size()-1; ++i){
        for ( int j=i+1;j<numbers.size();++j){
            int sum = numbers[i]+numbers[j];
            if(arr[sum].empty()){
                answer.push_back(sum);
                arr[sum].push_back(1);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}