#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, K;
int cnt = 0;
int answer = -1;

vector<int> A;
vector<int> temp;

void merge(int p , int q, int r);

void merge_sort(int p, int r)
{
    if ( p < r)
    {
        int q = (p+r) / 2;
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge(p,q,r);
    }
}
void merge(int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 0;
    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
        {
            temp[t++] = A[i++];
        } else
        {
            temp[t++] = A[j++];
        }
    }
    while (i <= q)
    {
        temp[t++] = A[i++];
    }
    while (j <= r)
    {
        temp[t++] = A[j++];
    }
    i = p;
    t = 0;
    while (i <= r)
    {
        A[i] = temp[t];
        cnt++;
        if (cnt == K)
        {
            answer = A[i];
        }
        i++;
        t++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> K;
    temp.resize(N);
    for (int i = 0 ; i < N ; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    merge_sort(0, N-1);
    cout << answer;
    return 0;
}
