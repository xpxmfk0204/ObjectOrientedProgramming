#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;

int main()
{
    float t, dt, T;
    dt = 1. / 2200. / 40.;
    T = 10. / 110.;

    // ofstream linear("linearGraph.txt");
    ofstream expsin("expsinGraph.txt");

    for (t = 0.0; t < T; t += dt)
    {
        expsin << t << " " << exp(-110 * t) * cos(2. * PI * 110 * t) << " " << exp(-110 * t) * sin(2. * PI * 110 * t) << endl;
    }
    expsin.close();

    return 0;
}
