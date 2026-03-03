#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    cout.precision(10);
    cout << fixed;
    unordered_map <string, double> Grade;
    Grade["A+"] = 4.5;
    Grade["A0"] = 4.0;
    Grade["B+"] = 3.5;
    Grade["B0"] = 3.0;
    Grade["C+"] = 2.5;
    Grade["C0"] = 2.0;
    Grade["D+"] = 1.5;
    Grade["D0"] = 1.0;
    Grade["F"] = 0.0;
    double sum = 0;
    double num = 0;
    for (int i = 0; i < 20; i++)
    {
        string subject;
        double time;
        string score;
        cin >> subject >> time >> score;
        if (score == "P")
        {
            continue;
        } 
        sum += time * Grade[score];
        num += time;
    }
    cout << sum/num;
    // ----------------------------------------
    return 0;
}
