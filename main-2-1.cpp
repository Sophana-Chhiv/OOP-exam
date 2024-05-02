#include "Tesla.h"
#include "Tesla.cpp"
#include "Car.h"
#include "Car.cpp"
#include <iostream>

int main() {

    Tesla a;
    Tesla b('b', 200000);

    std::cout << "Price is: " << a.get_price() << std::endl;

    std::cout << "Price of b is: " << b.get_price() << std::endl;
    b.set_price(50000);
    b.set_model('c');
    b.set_batteryPercentage(20);
    std::cout << "New Price of b is: " << b.get_price() << std::endl;
    std::cout << "New Model of b is: " << b.get_model() << std::endl;
    std::cout << "battery percentage of b is: " << b.get_batteryPercentage() << std::endl;

    a.drive(20);
    b.drive(5);
    //b.drive(2000);

    std::cout << "emission is: " << b.get_emission() << std::endl;
    std::cout << "battery of b is: " << b.get_batteryPercentage() << std::endl;


    return 0;
}