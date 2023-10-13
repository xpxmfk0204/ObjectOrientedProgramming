#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char* header;
   header = new char[44];

   short* n; n = (short*)(header + 22); cout << *n << endl; //number of channels
   int* fs; fs = (int*)(header + 24); cout << *fs << endl; //smaple rate
   short* b; b = (short*)(header + 28); cout << *b << endl; //byte rate 

   ifstream xx("Beatles.wav", ios::binary | ios::in);
   if (!xx) return 666;
   xx.read(header, 44 * sizeof(char));
   xx.close();

   int N = fs[0] * 20; //10초 분량
   short* data;
   data = new short[N];

   *n = 1;
   *b = n[0] * fs[0] * sizeof(short);
   xx.open("Beatles.wav", ios::binary | ios::in);
   xx.read((char*) data, N * sizeof(short));// 헤더를 읽은 후 xx.close(); 하기 전에 10초 데이터를 읽는다.
   xx.close();

   ofstream yy("my.wav", ios::binary | ios::out);
   if (!yy) return 666;
   yy.write(header, 44 * sizeof(char));
   yy.write((char*) data, N * sizeof(char));
   yy.close();

}
