#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    queue <int> q1, q2;
    long long sum1 = 0;
    long long sum2 = 0;
    
    for (int i = 0 ; i < queue1.size(); i++) {
        q1.push(queue1[i]);
        sum1 += queue1[i];
        
    }
    for (int i = 0; i<queue2.size(); i++) {
        q2.push(queue2[i]);
        sum2 += queue2[i];
    }
    long long target = (sum1+ sum2) /2;
    if ( (sum1+sum2)% 2 != 0) {
        return -1;
    }
    int count = 0;
    int limit = queue1.size() * 3;
    
    while (count <= limit ) {
        if (sum1==target)  {
            return count;
        }
        
        if (sum1 > target ){
            int num = q1.front();
            q1.pop();
            sum1 -= num;
            sum2 += num;
            q2.push(num);
        } 
        else {
            int num = q2.front();
            q2.pop();
            sum2 -= num;
            sum1 += num;
            q1.push(num);
        }
        count++;
    }
    return -1;
}