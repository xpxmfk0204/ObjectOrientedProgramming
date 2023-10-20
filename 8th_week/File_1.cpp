#include <iostream>
#include <fstream>
using namespace std;

int mult5(int n) {
    return n * 5;
}
float sqr(float n) {
    return n * n;
}

int main() {
    ofstream aa("mybin1.dat", ios::binary | ios::out);
    if (!aa) {
        cout << "File not found : mybin1.dat" << endl;
        return 666;
    }
    int x = 1234;
    aa.write((char*)&x, sizeof(int));
    int* ii = new int[5];
    for (int i = 0; i < 5; i++) ii[i] = mult5(1000 * (i + 1));
    aa.write((char*)ii, sizeof(int) * 5);
    float* ff = new float[3];
    float f = -0.5;
    for (int i = 0; i < 3; i++) {
        ff[i] = sqr(f);
        f += 0.5;
    }
    aa.write((char*)ff, sizeof(float) * 3);
    aa.close();

    ifstream bb("mybin1.dat", ios::binary | ios::in);
    int* xx = new int[9];
    float* yy = (float*)(xx + 6);
    bb.read((char*)xx, 36);
    for (int i = 0; i < 6; i++) cout << xx[i] << endl;
    for (int i = 0; i < 3; i++) cout << yy[i] << endl;
    bb.close();
    return 0;
}