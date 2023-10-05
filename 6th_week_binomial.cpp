#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

float factorial(int n) { if(n == 0 | n == 1) return 1; else return n * factorial(n - 1); }
int main(void) 
{
	float p,*biex, *bitheory;
	int n, k, N = 1000, count;  // N number of experiment
	n = 20;  p = 1.0 / 6.0;
	biex = new float[n+1];                                  //biex array 0~20까지 21칸 생성
	bitheory = new float[n+1];                              //bitheory array 0~20까지 21칸 생성
	for (k = 0; k <= n; k++) biex[k] = 0;                   //biex array 전부 0으로 초기화
	for (int nn = 0; nn < N; nn++) {
		count = 0;
		for (int j = 0; j < n; j++) if ((rand() / (float)RAND_MAX) < p) count++;               
		biex[count]++;
	} // nn
	for (int k = 0; k <= n; k++) biex[k] /= (float)N; // count --> probability
	ofstream xxx("binomial.txt");
	for (int k = 0; k <= n; k++) {
		bitheory[k] = factorial(n) / factorial(k) / factorial(n - k) * pow(p, k) * pow((1-p), n - k);
		xxx << k << " " << bitheory[k] << " " << biex[k] << endl;
	}
	xxx.close();
	return 1;
}
