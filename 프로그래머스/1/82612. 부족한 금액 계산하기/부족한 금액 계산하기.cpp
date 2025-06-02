using namespace std;

long long solution(int price, int money, int count)
{
    //원래는 price, 그치만 n 번 타면 n*price 값, 놀이기구 타는 횟수 count
    //ex) 20원 갖고있는데 3원짜리를 4번 탐.
    //20 - for int i = 1; i<=4; ++i    sum += i*price 그러면
    //3,6,9,12 = 30원이 있어야 함. 현재 재화 20이니까 10 리턴
    long long sum = 0;
    for (int i = 1 ; i <= count ; ++i) {
        sum += i * price;
    }
    if ( money - sum <0) {
        return sum-money;
    }
    else {
        return 0;
    }
}