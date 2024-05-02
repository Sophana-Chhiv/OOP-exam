#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
    protected:
        char model;
        float batteryPercentage = 100;      // Initially 100%

    public:
        Tesla();            
        Tesla(char model, int price); 

        char get_model();
        void set_model(char newModel);
        float get_batteryPercentage();
        void set_batteryPercentage(float newBatteryPercentage);

        void chargeBattery(int mins);            
        void drive(int kms); 


};


 
  





#endif