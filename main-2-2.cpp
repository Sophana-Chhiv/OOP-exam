#include "Ford.h"
#include "Ford.cpp"
#include "Car.h"
#include "Car.cpp"
#include <iostream>

int main() {

    Ford a;
    Ford b(1, 200000);

    std::cout << "Price is: " << a.get_price() << std::endl;
    std::cout << "Price of b is: " << b.get_price() << std::endl;
    b.set_price(50000);
    b.set_badgeNumber(2);
    b.set_litresOfFuel(20);
    std::cout << "New Price of b is: " << b.get_price() << std::endl;
    std::cout << "New Model of b is: " << b.get_badgeNumber() << std::endl;
    std::cout << "battery percentage of b is: " << b.get_litresOfFuel() << std::endl;

    a.drive(20);
    b.drive(5);
    //b.drive(2000);

    std::cout << "emission is: " << b.get_emission() << std::endl;
    std::cout << "battery of b is: " << b.get_litresOfFuel() << std::endl;


    return 0;
}