#include "Car.h"

Car::Car(): price(0), emissions(0) {}

Car::Car(int price): price(price), emissions(0) {}

int Car::get_price() {return price;}

void Car::set_price(int newPrice) {price = newPrice;}

void Car::drive(int kms) {
    emissions = 20*kms;
}

int Car::get_emission(){return emissions;}

