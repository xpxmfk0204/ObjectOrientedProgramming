#include <iostream>
#include <cmath>

using namespace std;

void multx(int n, int* ii, int x) { // 응용- 연습문제
   for (int i = 0; i < n; i++) ii[i] = i * x;
   return;
}

int main()
{
   int a[10];
   multx(4, a, 5);
   multx(6, a + 4, 10);
   return 0;
}
