#include <iostream>
#include <fstream>
using namespace std;

void mult5(int n, int* a) {
    for (int i = 0; i < n; i++) {
        a[i] = 5 * 1000 * (i + 1);
    }
}
void sqr(int n, float* b) {
    float f = -0.5;
    for (int i = 0; i < n; i++) {
        b[i] = f * f;
        f += 0.5;
    }
}
int all(char* ss) {
    ofstream aa("mybin4.dat", ios::binary | ios::out);
    if (!aa) {
        cout << "File not found : mybin4.dat" << endl;
        return 666;
    }
    int* ii = new int[9];
    ii[0] = 1234;
    mult5(5, ii + 1);
    float* ff = (float*)ii + 6;
    sqr(3, ff);
    aa.write((char*)ii, 9 * sizeof(int));
    aa.close();

    ifstream bb("mybin4.dat", ios::binary | ios::in);
    int* xx = new int[9];
    float* yy = (float*)(xx + 6);
    bb.read((char*)xx, 36);
    for (int i = 0; i < 6; i++) cout << xx[i] << endl;
    for (int i = 0; i < 3; i++) cout << yy[i] << endl;
    bb.close();
    return 0;
}
int main() {
    all((char*)"mybin4.dat");
    return 0;
}