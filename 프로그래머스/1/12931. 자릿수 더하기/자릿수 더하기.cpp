#include <iostream>
using namespace std;
int solution(int n)
{
    int total = 0;
    while (n!=0){
        int a = n % 10;
        total += a;
        n = n/10;
    }
    return total;
}