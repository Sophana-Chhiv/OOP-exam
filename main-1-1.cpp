#include "Car.h"
#include "Car.cpp"
#include <iostream>


int main() {

    Car a;
    Car b(20000);

    std::cout << "Price is: " << a.get_price() << std::endl;

    std::cout << "Price of b is: " << b.get_price() << std::endl;
    b.set_price(50000);

    std::cout << "New Price of b is: " << b.get_price() << std::endl;

    a.drive(20);
    b.drive(10);

    std::cout << "emission is: " << a.get_emission() << std::endl;

    std::cout << "emission of b is: " << b.get_emission() << std::endl;
 


    return 0;
}