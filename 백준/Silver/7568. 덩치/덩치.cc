#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    int weight, height;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<Student> students(N);
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].weight >> students[i].height;
    }
    for (int i = 0; i < N; i++)
    {
        int num = 1; // 나보다 덩치 큰 사람 수 +1
        for (int j = 0 ; j< N; j++)
        {
            if (i==j) continue;
            if (students[j].weight > students[i].weight &&
                students[j].height > students[i].height)
            {
                num++;
            }
        }
        v.push_back(num);
    }
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }
    
    // ----------------------------------------
    return 0;
}
