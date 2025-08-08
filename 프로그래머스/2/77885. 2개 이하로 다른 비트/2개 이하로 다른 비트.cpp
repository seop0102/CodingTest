#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string toBinary(long long num) {
    if (num == 0) return "0";
    string bin;
    while (num > 0) {
        bin.push_back((num % 2) + '0');
        num /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

long long toDecimal(const string &bin) {
    long long num = 0;
    for (char c : bin) {
        num = num * 2 + (c - '0');
    }
    return num;
}

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    answer.reserve(numbers.size());

    for (long long num : numbers) {
        if (num % 2 == 0) {
            answer.push_back(num + 1);
        } else {
            string bin = toBinary(num);
            int idx = bin.size() - 1;
            while (idx >= 0 && bin[idx] == '1') {
                idx--;
            }

            if (idx < 0) {
                bin = "10" + string(bin.size() - 1, '1');
            } else {
                bin[idx] = '1';
                if (idx + 1 < (int)bin.size()) {
                    bin[idx + 1] = '0';
                }
            }

            answer.push_back(toDecimal(bin));
        }
    }

    return answer;
    
}