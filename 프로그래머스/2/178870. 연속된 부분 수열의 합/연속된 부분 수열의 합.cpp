#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int n = sequence.size();
    int first = 0;
    int last = 0;
    int num = 1000001;
    long long sum = 0;
    int start = 0;
    for (int right = 0; right < n; ++right) {
        sum += sequence[right];

        while (sum >= k && start <= right) {
            if (sum == k) {
                int len = right - start + 1;
                if (len < num || (len == num && start < first)) {
                    num = len;
                    first = start;
                    last  = right;
                }
            }
            sum -= sequence[start];
            ++start;
        }
    }
    answer.push_back(first);
    answer.push_back(last);
    return answer;
}