#include <iostream>
using namespace std;

class Car {
    private:
    int engineGrade;       // engineGrade 라는 이름의 private 변수 생성
    protected:
    float price;
    void speedUP(float);
    void speedDown(float);
    int airbag;             // airbag 이라는 이름의 protected 변수 생성
    public:
    void setPrice(float);
    float getPrice();
    float speed;
    void speedChange(float);
    int wheels;
    void setWheels(int);
    int getWheels();
    void klaxon(int);
    int seats;          // seats라는 이름의 public 변수 생성
};
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


int main(void) {
    SUV* newSUV = new SUV();
    newSUV->setPrice(5000);
    cout << " price " << newSUV->price << "\n";
    cout << " price " << newSUV->getPrice() << "\n";

    newSUV->speedChange(10.0);
    newSUV->speedUP(10.0);

    newSUV->setSparewheels(2);
    cout << "Spare wheels are " << newSUV->getSparewheels() << endl;
    newSUV->setSeats(4);
    cout << "Seats are " << newSUV->getSeats() << endl;             // 새로 만든 public 변수의 외부 호출

    newSUV->setEngineGrade();
    cout << "Engine grade is " << newSUV->getEngineGrade() << endl;     // 새로 만든 private 변수의 외부 호출

    newSUV->setAirbag(2);
    cout << "Airbags are " << newSUV->airbag << endl;               // 새로 만든 protected 변수의 외부 호출

    delete newSUV;
    return 0;
}