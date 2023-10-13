#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char* header;
    header = new char[44]; // header 44 bytes 저장할 Array 설정

    short* n; // NumChannels
    n = (short*)(header + 22);
    cout << *n << endl;

    int* fs; // Sample Rate
    fs = (int*)(header + 24);
    cout << *fs << endl;
    short* b; //Byte Rate
    b = (short*)(header + 28);
    cout << *b << endl;

    ifstream xx("Beatles.wav", ios::binary | ios::in);
    if (!xx) return 666;
    xx.read(header, 44 * sizeof(char));  //  beatles 파일 header 읽어와서 header 위치에 저장
    xx.close();

    int N = fs[0] * 20; //10초 분량
    short* data = new short[fs[0]]; // 1초간 데이터 저장할 분량

    //어떤 wave file 의 header 44 bytes 를 읽어서, NumChannel = 1로 한다.
    float dt = 1. / fs[0];
    float a = 10000.0; // a = 진폭
    float f = 440.0; // f = 주파수
    const float pi = 3.141592;
    for (int i = 0; i < fs[0]; i++) {
        data[i] = (short)(a * sin(2.0 * pi * f * i * dt)); // data 에 내가 만든 값 저장
    }

    ofstream zz("my2.wav", ios::binary | ios::out);
    if (!zz) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
    zz.write(header, 44 * sizeof(char)); // 헤더를 쓴다. char = 1 byte
    zz.write((char*)data, (*fs) * sizeof(short));  // 이 줄을 한번 더 시행하면 2초분량이 된다.
    zz.close();

}
