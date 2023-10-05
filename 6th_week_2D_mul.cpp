#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// 2D array matrix multiplication
int main(void) {
    // matrix in 2D
    int N = 0, K = 0, M = 0;
    int **A, ** B, ** C;
    cout << "enter values N, K, M each" << endl;
    cin >> N >> K >> M;                                 //N = 2, K = 3, M = 4

    A = new int* [N];
    for (int i = 0; i < N; i++) A[i] = new int[K];
    B = new int* [K];
    for (int i = 0; i < M; i++) B[i] = new int[M];
    C = new int* [N];
    for (int i = 0; i < N; i++) C[i] = new int[M];
    
    //storing values for A, B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++){
            A[i][j] = i * K + j + 1;   
        }
    }
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < M; j++) {
            B[i][j] = i * M + j + 1;
        }
    }

    // C = A * B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) 
        {
            for (int k = 0; k < K; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] A[i], delete[] B[i], delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
