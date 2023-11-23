#include <iostream>
using namespace std;

class Car {
    public:
    Car() : speed(0.1), wheels(0), price(0.2) {};
    Car(float, int, float);
    void setPrice(float ii) {
        price = ii;
    }
    float getPrice() {
        return price;
    }
    float speed;
    void speedChange(float ii) {
        speed = ii;
    }
    int wheels;
    void setWheels(int ii) {
        wheels = ii;
    }
    int getWheels() {
        return wheels;
    }
    void klaxon(int);

    friend class Engineer;
    private:
    int engineGrade;        // engineGrade 라는 이름의 private 변수 생성
    protected:
    float price;
    void speedUp(float ii) {
        speed += ii;
    }
    void speedDown(float ii) {
        speed -= ii;
    }
};
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

int main(void) {
    SUV* newSUV = new SUV();
    newSUV->setPrice(45000);
    newSUV->speedChange(40.0);              // Engineer object에서 Car 클래스의 public member function 접근
    std::cout << "The wheels are " << newSUV->getWheels() << endl;
    Engineer engineer;
    std::cout << "Price is " << engineer.getCarPrice(newSUV) << " dollars\n";

    std::cout << "Speed is " << engineer.getCarSpeed(newSUV) << " km/h\n";

    engineer.setEngineGrade(newSUV);            // Engineer object에서 Car 클래스의 private member data 접근
    std::cout << "Engine grade is " << engineer.getEngineGrade(newSUV) << " out of 10\n";

    engineer.ChangeSpeed(newSUV);               // Engineer object에서 Car 클래스의 protected member function 접근
    std::cout << "Changed car's speed is " << engineer.En_speed(newSUV) << " km/h\n";
    delete newSUV;

    return 0;
}