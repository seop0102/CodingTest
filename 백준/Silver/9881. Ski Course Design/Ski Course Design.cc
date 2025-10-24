#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) cin >> v[i];

    sort(v.begin(), v.end());

    int mn = v.front(), mx = v.back();
    if (mx - mn <= 17) {
        cout << 0 << '\n';
        return 0;
    }

    long long ans = LLONG_MAX;

    for (int L = 0; L <= 83; ++L) {
        int R = L + 17;
        long long cost = 0;
        for (int h : v) {
            if (h < L) {
                long long d = L - h;
                cost += d * d;
            } else if (h > R) {
                long long d = h - R;
                cost += d * d;
            }
        }
        ans = min(ans, cost);
    }

    cout << ans << '\n';
    return 0;
}