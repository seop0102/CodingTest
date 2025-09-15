#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 간선 끊었다고 가정했을때, node에서 도달 가능한 노드 개수를 재귀 DFS로 세는 코드
int dfsCount(int node, vector<bool>& visited, vector<vector<int>>& graph, int excludeU, int excludeV) {
    visited[node] = true; //지금 들어온 node는 방문 표시
    int count = 1; //크기 (자기 자신 1부터 시작)
    
    for (int neighbor : graph[node]) //node와 직접 연결된 이웃들을 순회
    {
        bool isExcludedEdge = (node == excludeU && neighbor == excludeV) ||
            (node == excludeV && neighbor == excludeU); //(u,v) , (v,u) 차단
            
            
        // 아직 방문 안했고 + 끊은 간선이 아니라면 이웃으로 재귀 진입
        if (!visited[neighbor] && !isExcludedEdge) {
            count += dfsCount(neighbor, visited, graph, excludeU, excludeV);
        }
    }
    return count;
}



int solution(int n, vector<vector<int>> wires) {
    // 인접 리스트 구성
    vector<vector<int>> graph(n + 1); //1부터 n까지 (0은 안쓸거임)
    for (auto& wire : wires) {
        graph[wire[0]].push_back(wire[1]); 
        graph[wire[1]].push_back(wire[0]);
    }
    //이제 graph[i]는 i번 노드와 직접 연결된 이웃들의 리스트
    
    //차이의 최솟값을 저장할 변수. 초기값은 최대값인 n
    int minDiff = n;
    
    //모든 간선 (u,v)에 대해 1개씩 끊으며 테스트
    for (auto& wire : wires) {
        int u = wire[0];
        int v = wire[1];
        vector<bool> visited(n + 1, false); //방문배열
        
        //(u,v) 간선을 끊었다고 가정하고 u에서 DFS 시작 
        int component1 = dfsCount(u, visited, graph, u, v);
        //반대편은 n에서 component1 뺀 값
        int component2 = n - component1;
        
        //크기 차이 (절댓값)
        int diff = abs(component1 - component2);
        
        //최솟값 갱신
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}