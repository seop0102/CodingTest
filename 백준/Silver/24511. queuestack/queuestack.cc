#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    
    deque<int> d;
    for (int i = 0; i < N; i++)
    {
        if ( A[i] == 0) // 큐인 애들만 있는 덱 만들기
        {
            d.push_back(B[i]);
        }
    }
    int M;
    cin >> M;
    for (int i = 0 ; i < M; i++)
    {
        int x;
        cin >> x;
        d.push_front(x); // 앞에 넣고 뒤에거 빼기
        cout << d.back() << " ";
        d.pop_back();
    }
    return 0;
}
