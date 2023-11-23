#include "Car_2.h"

class Engineer {
    public:
    int getCarPrice(Car* xx) {
        return xx->price;
    }
    float getCarSpeed(Car* xx) {
        return xx->speed;               // Car 클래스의 public memberdata speed 접근
    }
    void setEngineGrade(Car* xx) {      // Engineer class 에서 Car 클래스의 private member data 접근
        xx->engineGrade = 9;
    }
    int getEngineGrade(Car* xx) {
        return (xx->engineGrade);
    }
    void ChangeSpeed(Car* xx) {         // Engineer class 에서 Car 클래스의 protected member function 접근
        xx->speedUp(15.0);
    }
    float En_speed(Car* xx) {
        return xx->speed;
    }
};