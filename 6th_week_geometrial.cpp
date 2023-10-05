#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
float factorial(int n) { if(n == 0 | n == 1) return 1; else return n * factorial(n - 1); }
int main(void) 
{
	float p,*geoex, *geotheory;
	int n, k, N;  // N number of experiment
	cout << "실행 횟수, 실험 횟수, 확률:" << endl;
    cin >> n >> N >> p;
	geoex = new float[n+1];                                  //geoex array 0~20까지 21칸 생성
	geotheory = new float[n+1];                              //geotheory array 0~20까지 21칸 생성
	for (k = 0; k <= n; k++) geoex[k] = 0;                   //geoex array 전부 0으로 초기화
	for (int nn = 0; nn < N; nn++) {
      for (int j = 0; j <= n; j++) {
         if ((rand() / (float)RAND_MAX) < p) {
            geoex[j]++; break;
         }
      }
   } // nn
	for (int k = 0; k <= n; k++) geoex[k] /= (float)N; // count --> probability
	ofstream xxx("geometrical.txt");
	for (int k = 0; k <= n; k++) {
		geotheory[k] = pow((1-p), k-1)*p;
		xxx << k << " " << geotheory[k] << " " << geoex[k] << endl;
	}
	xxx.close();
	return 1;
}
