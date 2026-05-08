#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> v) {
    int a;
    a = v[v.size()-1] - v[v.size()-2] > 0 ? v[v.size()-1] - v[v.size()-2] : v[v.size()-1]*2;   
    v.push_back(a);
    return v;
}