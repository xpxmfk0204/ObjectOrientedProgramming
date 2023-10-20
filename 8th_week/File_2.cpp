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

int main() {
    ofstream aa("mybin2.dat", ios::binary | ios::out);
    if (!aa) {
        cout << "File not found : mybin2.dat" << endl;
        return 666;
    }
    int x = 1234;
    aa.write((char*)&x, sizeof(int));
    int* ii = new int[5];
    mult5(5, ii);
    aa.write((char*)ii, 5 * sizeof(float));
    float* ff = new float[3];
    sqr(3, ff);
    aa.write((char*)ff, 3 * sizeof(float));
    aa.close();

    ifstream bb("mybin2.dat", ios::binary | ios::in);
    int xx[9];
    float* yy = (float*)(xx + 6);
    bb.read((char*)xx, 36);
    for (int i = 0; i < 6; i++) cout << xx[i] << endl;
    for (int i = 0; i < 3; i++) cout << yy[i] << endl;
    bb.close();
    return 0;
}