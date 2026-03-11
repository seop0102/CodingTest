#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

struct score
{
    string name;
    int korean, english, math;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin >> N;
    vector<score> students;
    for (int i= 0; i < N; i++)
    {
        score s;
        cin >> s.name >> s.korean >> s.english >> s.math;
        students.push_back({s});
    }
    sort (students.begin(), students.end(), [] (score s1, score s2)
    {
        if (s1.korean != s2.korean)
        {
            return s1.korean > s2.korean;
        }
        if (s1.english != s2.english)
        {
            return s1.english < s2.english;
        }
        if (s1.math != s2.math)
        {
            return s1.math > s2.math;
        }
        return s1.name < s2.name;
    });
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << "\n";
    }
    // ----------------------------------------
    return 0;
}
