#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char* header;
    header = new char[44]; // header 44 bytes 저장할 Array 설정

    ifstream xx("Beatles.wav", ios::binary | ios::in);
    if (!xx) return 666;
    xx.read(header, 44 * sizeof(char));  //  beatles 파일 header 읽어와서 header 위치에 44 bytes 만큼의 메모리에 저장
    xx.close();

    short* n; // NumChannels
    n = (short*)(header + 22);
    cout << *n << endl;
    int* fs; // Sample Rate
    fs = (int*)(header + 24);
    cout << *fs << endl;
    short* b; //Byte Rate
    b = (short*)(header + 28);
    cout << *b << endl;
}