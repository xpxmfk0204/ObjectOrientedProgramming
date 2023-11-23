#include "Car_2.h"

class SUV : public Car {
    private:
    int sparewheels;
    public:
    void klaxon(int ii) {
        speedUp(10.0);
        for (int i = 0; i < ii; i++) {
            cout << "Beep\n";
        }
    }
    void setSparewheels(int ii) {
        sparewheels = ii;
    }
    int getSparewheels() {
        return sparewheels;
    };
    float getTotalPrice() {
        return (this->wheels * 100.0 + this->price);
    }
};