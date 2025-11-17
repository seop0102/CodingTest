#include <string>
#include <vector>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    long long totalTime = 0;
    long long start = 1;
    long long end = limit;
    long long level = (start + end) / 2;

    while(start<=end)
    {
        totalTime=0;
        for(long long i=0 ; i < diffs.size() ; i++)
        {
            if(diffs[i] <= level)
            {
                totalTime += times[i];
            }
            else
            {
                long long error = diffs[i] - level; //틀린 횟수
                totalTime += (times[i] + times[i-1]) * error + times[i];
            }
        }
        if(totalTime <= limit)
        {
            end = level - 1;
        }
        else
        {
            start = level + 1;
        }
        level = (start + end) /2;
    }
    return level+1;
}