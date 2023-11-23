#include <iostream>
#include "Car.h"
#include "SUV.h"
using namespace std;

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