#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// 음에 따른 주파수 얻는 함수
float getfrequency(char* h) {
    float freq;
    const char* st_str1 = "C";
    const char* st_str2 = "D";
    const char* st_str3 = "E";

    const char* st_str4 = "F";
    const char* st_str5 = "G";
    const char* st_str6 = "A";
    const char* st_str7 = "B";
    if (strncmp(h, st_str1, 1) == 0) { // C(도)
        freq = 261;
    }
    else if (strncmp(h, st_str2, 1) == 0) {// D(레)
        freq = 294;
    }
    else if (strncmp(h, st_str3, 1) == 0) {// E(미)
        freq = 330;
    }
    else if (strncmp(h, st_str4, 1) == 0) {// F(파)
        freq = 349;
    }
    else if (strncmp(h, st_str5, 1) == 0) {// G(솔)
        freq = 392;
    }
    else if (strncmp(h, st_str6, 1) == 0) {// A(라)
        freq = 440;
    }
    else if (strncmp(h, st_str7, 1) == 0) {// B(시)
        freq = 494;
    }
    else {
        cout << "getfreq() is rejected. because *h was " << *h << endl;
        freq = 0;
    }
    return freq;

}

// 볼륨 조절함수 (진폭)
float getamplitude(int* e) {
    float amplitude;
    amplitude = *e * 1000;
    return amplitude;
}

// 하나의 음표 연주시간 정하기
float getlength(int* e) {
    float TT;
    if (*e == 4) TT = 1;
    else if (*e == 8) TT = 0.5;
    else if (*e == 16) TT = 0.25;
    else {
        cout << "TT is being elsed because *e was " << *e << endl;
        TT = 0;
    }
    return TT;
}

int main() {
    
    char* header;
    header = new char[44];

    short* n;
    n = (short*)(header + 22);


    int* fs;
    fs = (int*)(header + 24);


    short* b;
    b = (short*)(header + 28);

    // 1. Beatles.wav 의 헤더파일을 읽는다
    ifstream xx("Beatles.wav", ios::binary | ios::in);
    if (!xx) return 666;
    xx.read(header, 44 * sizeof(char));
    xx.close();
   
    int* eu, * ss;
    int num;
    char* hh;
    float* f, * a , *T;
    const float pi = 3.141592;
    int N = fs[0] * 20;

    // 2. 헤더 내용을 바꾼다.
    *n = 1;
    *b = n[0] * fs[0] * sizeof(short); // n[0] = numchannels , fs[0] = Sample Rate
   
    ifstream music("music.txt");
    music >> num;// num = 6
    
    short* music_data = new short[N];
    T = new float[num];
    a = new float[num];
    f = new float[num];

    eu = new int[num];
    ss = new int[num];
    hh = new char[num];
    
    ofstream xxx("my_music2.wav", ios::binary | ios::out);
    if (!xxx) return 666;
    xxx.write(header, 44 * sizeof(char));
    for (int i = 0; i < num; i++) {
        music >> eu[i] >> hh[i] >> ss[i];
       
        f[i] = getfrequency(hh+i); // 주파수 int pointer 입력값으로 받음
        a[i] = getamplitude(ss+i); // 진폭 char pointer 입력값으로 받음
        T[i] = getlength(eu+i); // 길이 int pointer 입력값으로 받음
        float dt = 1. / fs[0];  // dt = 1/ 총 샘플링 횟수
        // sample_num[i] = T * fs[0]; fs = 44100
        for (int j = 0; j < T[i] * fs[0]; j++) {
            music_data[j] = a[i] * sin(2.0 * pi * f[i] * j * dt);
        }
        xxx.write((char*)music_data, T[i] * (*fs) * sizeof(short));
    }
    music.close();
    xxx.close();
    return 0;
}