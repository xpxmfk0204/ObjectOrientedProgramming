#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

float factorial(int n) { if (n == 0 | n == 1) return 1; else return n * factorial(n - 1); }
int main(void)
{
   srand(static_cast<unsigned int>(time(nullptr)));
   float p, * biex, * bitheory;
   int n, k, N, count;  // N number of experiment
   cout << "시행 횟수, 실험 횟수, 확률: " << endl;
   cin >> n >> N >> p;
   biex = new float[n + 1];
   bitheory = new float[n + 1];
   for (k = 0; k <= n; k++) biex[k] = 0;
   for (int nn = 0; nn < N; nn++) {
      count = 0;
      for (int j = 0; j < n; j++) if ((rand() / (float)RAND_MAX) < p) count++;
      biex[count]++;
   } // nn
   for (int k = 0; k <= n; k++) biex[k] /= (float)N; // count --> probability
   ofstream xxx("binomial1.txt");
   for (int k = 0; k <= n; k++) {
      bitheory[k] = factorial(n) / factorial(k) / factorial(n - k) * pow(p, k) * pow((1 - p), n - k);
      xxx << k << " " << bitheory[k] << " " << biex[k] << endl;
   }
   xxx.close();
   return 1;
}
