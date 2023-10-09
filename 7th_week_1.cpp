#include <iostream>
#include <cmath>
using namespace std;

int sumR(int n) { // 정수 1부터 n까지 더하는 함수
   if (n < 2) return n;
   else return n + sumR(n - 1);
}

int main()
{
   cout << "5 까지의 합 = " << sumR(5) << endl;
   cout << "10 까지의 합 = " << sumR(10) << endl;
   cout << "100 까지의 합 = " << sumR(100) << endl;
   return 0;
}
