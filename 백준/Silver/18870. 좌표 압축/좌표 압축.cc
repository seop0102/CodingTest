#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    //해당 문제는 본인보다 작은 수의 개수를 출력하는 문제입니다.
    //셋에서 중복 제거하고 벡터에 옮겨담아서 이분탐색하기.
    int n;
    cin >> n;
    set<int> s;
    vector<int> v;
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        answer.push_back(x);
    } 
    //s -10, -9, 2, 4   answer 2 4 -10 4 -9
    for (int i : s)
    {
        v.push_back(i);
    } //v -10 -9 2 4
    for (int i = 0 ; i < n; i++)
    {
        int left = 0 ;
        int right = v.size()-1;
        while (left <= right)
        {
            int mid = (left + right)/2; //인덱스 번호 = 나보다 작은 수 갯수
            if (v[mid] == answer[i])
            {
                cout << mid << " ";
                break;
            }else if (v[mid] < answer[i])
            {
                left = mid + 1;
            } else
            {
                right = mid -1;
            }
        }
    }
    
    
    // ----------------------------------------
    return 0;
}
