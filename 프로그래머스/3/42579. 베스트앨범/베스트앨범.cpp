#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    // 1) 장르별 총 재생수
    unordered_map<string, long long> total; // genre -> total plays

    // 2) 장르별 곡 목록 (각 곡: {재생수, 인덱스})
    unordered_map<string, vector<pair<int,int>>> bucket; // genre -> [(plays, idx)]

    const int n = (int)genres.size();
    for (int i = 0; i < n; ++i) {
        total[genres[i]] += plays[i];
        bucket[genres[i]].push_back({plays[i], i});
    }

    // 3) 장르 정렬: 총 재생수 기준 내림차순
    vector<string> order;
    order.reserve(total.size());
    for (auto &kv : total) order.push_back(kv.first);

    sort(order.begin(), order.end(), [&](const string& a, const string& b){
        return total[a] > total[b];
    });

    // 4) 결과 구성
    vector<int> answer;
    for (const string& g : order) {
        auto &v = bucket[g];

        // 장르 내 정렬: 재생수 내림차순, 같으면 인덱스 오름차순
        sort(v.begin(), v.end(), [](const pair<int,int>& A, const pair<int,int>& B){
            if (A.first != B.first) return A.first > B.first; // plays desc
            return A.second < B.second;                       // index asc
        });

        // 최대 두 곡
        answer.push_back(v[0].second);
        if (v.size() >= 2) answer.push_back(v[1].second);
    }

    return answer;
}
