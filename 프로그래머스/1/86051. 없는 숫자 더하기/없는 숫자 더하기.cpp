#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int num[10] ={1,1,1,1,1,1,1,1,1,1};
    int sum=0;
    for (int i =0; i<numbers.size(); i++) {
        num[numbers[i]]--;
    }
    for (int j=0;j<10; j++) {
        sum += j * num[j];
    }
    return sum;
}