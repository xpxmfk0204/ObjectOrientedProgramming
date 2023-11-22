#include <iostream>
using namespace std;

class animal {
    public:
    animal() : nLegs(2) {
        cout << nLegs << " Animal \n";
    };
    int nLegs;
    void eat() {cout << "I eat \n";}
};
class human : public animal {
    public:
    human() {nArms = 2;};
    int nArms;
    void walk() {cout << "I walk \n";}
};
class bird : public animal {
    public:
    bird() : nWings(2) {};
    int nWings;
    void fly() {cout << "I fly \n";}
};
class fish : public animal {
    public:
    fish() : nFin(2) {};
    int nFin;
    void swim() {cout << nFin << " " << nLegs << endl;}
};

int main(void) {
    animal a;
    human b;
    bird c;
    fish d;
    a.eat();
    b.walk();
    c.fly();
    d.eat();
    d.swim();
    cout << " b " << b.nLegs << "\n";
    cout << " size \n";
    cout << " a " << sizeof(a) << "\n";
    cout << " b " << sizeof(b) << "\n";
    cout << " c " << sizeof(c) << "\n";
    return 0;
}