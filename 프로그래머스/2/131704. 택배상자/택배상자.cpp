#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int len = order.size();
    vector<int> arr(len);
    for (int i = 0; i< len; ++i) {
        arr[i] = i+1;
    }
    stack<int> s;
    int index =0;
    for (int i = 0 ; i < len ; ++i ){
        while (index < len && arr[index] < order[i]) {
            s.push(arr[index]);
            index++;
        }

        if (index < len && arr[index] == order[i]) {
            index++;
            continue;     
        }

        if (!s.empty() && s.top() == order[i]) {
            s.pop();     
            continue;
        }
        return i;
    }
    return len;
}