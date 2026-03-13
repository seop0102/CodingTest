#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Birth
{
    string name;
    int day, month, year;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<Birth> births;
    for (int i = 0; i < N; i++)
    {
        Birth b;
        cin >> b.name >> b.day >> b.month >> b.year;
        births.push_back(b);
    }
    sort(births.begin(), births.end(), [] (Birth A, Birth B)
    {
        if (A.year != B.year)
        {
            return A.year < B.year;
        }
        if (A.month != B.month)
        {
            return A.month < B.month;
        }
        if (A.day != B.day)
        {
            return A.day < B.day;
        }
    });
    cout << births[births.size()-1].name << "\n" << births[0].name;
    return 0;
}