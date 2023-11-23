#include <iostream>
#include "Car_2.h"
#include "SUV_2.h"
#include "Engineer.h"
using namespace std;

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