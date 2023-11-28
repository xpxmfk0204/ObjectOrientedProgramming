#include <iostream>
#include <unistd.h>
using namespace std;

int main(void) {
    int elapsedSeconds = 0, x, T = 3;
    cout << " RANDMAX " << RAND_MAX << endl;
    while (elapsedSeconds < 18) {
        sleep(T);
        x = rand() % 100;
        elapsedSeconds += T;
        cout << " Elapsed time[sec] = " << elapsedSeconds << " " << x << endl;
    }
    return 0;
}