#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
    //그래프(인접 리스트) 구성
    vector<vector<pair<int,int>>> g(N + 1);
    for (const auto& e : road) {
        int a = e[0], b = e[1], w = e[2];
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }       

    //다익스트라 준비
    const int INF = numeric_limits<int>::max() / 4;
    //dist[i] = 1번에서 i번까지의 현재까지 알려진 최단 시간
    //처음엔 모두 무한대로 채워서 '아직 경로를 모름' 상태로 둔다
    vector<int> dist(N + 1, INF);
    //시작 정점은 시간이 0 (자기 자신까지의 거리 0)
    dist[1] = 0;

    // 우선 순위 큐 준비 
    priority_queue<
        pair<int,int>, //(거리,정점)
        vector<pair<int,int>>, //내부 컨테이너 
        greater<pair<int,int>>// 오름차순 정렬 
    > pq;
    //시작점을 힙에 넣고 출발 
    pq.push({0, 1});

    //다익스트라 본 루프
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;   // 구식 항목 스킵
        if (d > K) break;             // 선택: K 초과면 더 볼 필요 없음(양수 가중치)

        for (auto [v, w] : g[u]) {
            int nd = d + w;
            if (nd < dist[v]) {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    //K 이하로 도달 가능한 마을 수
    int ans = 0;
    for (int i = 1; i <= N; ++i)
        if (dist[i] <= K) ++ans;

    return ans;
}