#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;
    int time = 0;
    int currentWeight = 0;
    
    for (int i = 0 ; i < bridge_length; ++i) {
        bridge.push(0);
    }
    
    for (int w : truck_weights) {
        while (true) {
            ++time;
            currentWeight -= bridge.front();
            bridge.pop();
            
            if (currentWeight + w <= weight) {
                bridge.push(w);
                currentWeight += w;
                break;
            } else {
                bridge.push(0);
            }
        }
    }
    return time+bridge_length;
}