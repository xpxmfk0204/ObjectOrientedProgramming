#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // differentiation
    double x1 = 0, x2 = 0, x3 = 0;
    const double dx = 0.000001;
    cout << "x1, x2, x3 =  " << endl;
    cin >> x1 >> x2 >> x3;

    double anal_d_sin = cos(x1);
    double num_d_sin = (sin(x1 + dx) - sin(x1)) / dx;

    double anal_d_tan = pow(1 / cos(x2), 2);
    double num_d_tan = (tan(x2 + dx) - tan(x2)) / dx;

    double anal_d_log = 1 / (x3);
    double num_d_log = (log(x3 + dx) - log(x3)) / dx;

    cout << "Analatic differentiation of sin(x) = " << anal_d_sin << endl;
    cout << "Numerical differentiation of sin(x) = " << num_d_sin << endl;
    cout << "Error = " << ((num_d_sin - anal_d_sin) / anal_d_sin) * 100 << "%" << endl << endl;

    cout << "Analatic differentiation of tan(x) = " << anal_d_sin << endl;
    cout << "Numerical differentiation of tan(x) = " << num_d_sin << endl;
    cout << "Error = " << ((num_d_tan - anal_d_tan) / anal_d_tan) * 100 << "%" << endl << endl;

    cout << "Analatic differentiation of log(x) = " << anal_d_sin << endl;
    cout << "Numerical differentiation of log(x) = " << num_d_sin << endl;
    cout << "Error = " << ((num_d_log - anal_d_log) / anal_d_log) * 100 << "%" << endl << endl;

    // integration
    double a = 0, b = 0;
    const double dt = 0.000001;

    cout << "a, b = " << endl;
    cin >> a >> b;

    double anal_i_sin = -cos(b) + cos(a);
    double num_i_sin = 0;

    double anal_i_tan = -log(abs(cos(b))) + log(abs(cos(a)));
    double num_i_tan = 0;

    double anal_i_log = (b * log(b) - b) - (a * log(a) - a);
    double num_i_log = 0;

    double i = 0;
    for (i = a; i < b; i += dt)
    {
        num_i_sin += ((sin(i) + sin(i + dt)) * dt) / 2;
    }

    for (i = a; i < b; i += dt)
    {
        num_i_tan += ((tan(i) + tan(i + dt)) * dt) / 2;
    }

    for (i = a; i < b; i += dt)
    {
        num_i_log += ((log(i) + log(i + dt)) * dt) / 2;
    }

    cout << "Analatic integral of sin(x) = " << anal_i_sin << endl;
    cout << "Numerical integral of sin(x) = " << num_i_sin << endl;
    cout << "Error =  " << ((num_i_sin - anal_i_sin) / anal_i_sin) * 100 << "%" << endl;

    cout << "Analatic integral of tan(x) = " << anal_i_tan << endl;
    cout << "Numerical integral of tan(x) = " << num_i_tan << endl;
    cout << "Error =  " << ((num_i_tan - anal_i_tan) / anal_i_tan) * 100 << "%" << endl;

    cout << "Analatic integral of log(x) = " << anal_i_log << endl;
    cout << "Numerical integral of log(x) = " << num_i_log << endl;
    cout << "Error =  " << ((num_i_log - anal_i_log) / anal_i_log) * 100 << "%" << endl;

    return 0;
}
