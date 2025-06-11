#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> One,Two,Three,answer;
    int size = answers.size();
    //1번 12345, (5개씩 반복)
    //2번 21 23 24 25,      21 23 24 25 (8개씩 반복)
    //3번 33 11 22 44 55,   33 11 22 44 55 (10개씩 반복)
    int one[] = {1, 2, 3, 4, 5};
    int two[] = {2, 1, 2, 3, 2, 4, 2, 5};    
    int three[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for (int i = 0; i < size; ++i) {
        One.push_back(one[i%5]);
        Two.push_back(two[i%8]);
        Three.push_back(three[i % 10]);
    }
    int arr[3] = {0,0,0};
    
    for ( int i = 0; i < size;i++ ) {
        if ( answers[i] == One[i])  arr[0] ++;
        if (answers[i] == Two[i]) arr[1]++;
        if (answers[i] == Three[i] ) arr[2]++;
    }
    int maxnum = max({arr[0],arr[1],arr[2]});
    for (int j = 0 ; j < 3 ; j++) {
        if ( arr[j] == maxnum) {
            answer.push_back(j+1);
        }
    }
    return answer;
}