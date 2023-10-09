#include <iostream>
#include <cmath>

using namespace std;

int Fibonacci(int num);
int main(void)
{
    int num = 13;                           // 13번째 수까지
    for (int i = 1; i <= num; i++)
    {
        cout << Fibonacci(i) << endl;       // 피보나치 수열 출력
    }

    return 0;
}

int Fibonacci(int num)
{
    if (num == 1)
    {
        return 0;                           // 수열 1번째
    }
    if (num == 2)
    {
        return 1;                           // 수열 2번째
    }
    return Fibonacci(num-1) + Fibonacci(num-2);     // 3번째부터의 피보나치 수열 수식
}
