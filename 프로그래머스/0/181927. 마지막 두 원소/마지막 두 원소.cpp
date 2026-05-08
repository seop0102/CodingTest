#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int a;
    a = num_list[num_list.size()-1] - num_list[num_list.size()-2] > 0 ? num_list[num_list.size()-1] - num_list[num_list.size()-2] : num_list[num_list.size()-1]*2;   
    num_list.push_back(a);
    return num_list;
}