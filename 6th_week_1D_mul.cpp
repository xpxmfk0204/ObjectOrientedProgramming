#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// 1D array matrix multiplication
int main(void)
{
    // matrix in 1D
    int N = 2, M = 3, NM;
    float A[] = { 1,2,3,4 }, * B, * C;
    B = new float[N * M];
    C = new float[N * M];
    B[0] = 5; B[1] = 6; B[2] = 7;
    B[3] = 8; B[4] = 9; B[5] = 10;
    // C = A * B
    for (int n = 0; n<sizeof(A)/sizeof(*A); n+=2)
    {
        for (int m = 0; m<M; m++)
        {
            C[(n/N)*M + m] = A[n]*B[m] + A[n+1]*B[m+3];
        }
    }
    // show results
    for (int n = 0; n < N; n++) {
    for (int m = 0; m < M; m++) {
	    cout << C[n * M + m] << "  ";
    }
    cout << endl;
    }
    delete[]  B;
    delete[] C;
    return 0;
}
