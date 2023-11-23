#include "Car.h"

class SUV : public Car {
    private:
    int sparewheels;
    public:
    void klaxon(int ii) {
        speedUP(10.0);
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
    void setSeats(int ii) {
        seats = ii;                     // public 변수의 자식클래스 호출
    }
    int getSeats() {
        return seats;
    }
    void setEngineGrade() {
        engineGrade = 10;            // private 변수의 자식클래스 호출
    }
    int getEngineGrade() {
        return engineGrade;
    }
    void setAirbag(int ii) {           // protected 변수의 자식클래스 호출
        airbag = ii;
    }
};