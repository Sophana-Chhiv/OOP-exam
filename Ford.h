#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
    protected:
        int badgeNumber;
        float litresOfFuel = 60;      // Initially 100%

    public:
        Ford();            
        Ford(int badgeNumber, float litresOfFuel); 

        int get_badgeNumber();
        void set_badgeNumber(int newbadgeNumber);
        float get_litresOfFuel();
        void set_litresOfFuel(float newlitresOfFuel);

        void refuel(int litres);
        void drive(int kms);  
};


 

#endif