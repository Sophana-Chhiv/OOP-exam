#include "Tesla.h"
#include <iostream>

Tesla::Tesla():model(' '), Car(){}        
Tesla::Tesla(char model, int price):model(model), Car(price){} 

char Tesla::get_model(){return model;}
void Tesla::set_model(char newModel){model = newModel;}
float Tesla::get_batteryPercentage(){return batteryPercentage;}
void Tesla::set_batteryPercentage(float newBatteryPercentage){
    if (newBatteryPercentage <= 0){
    batteryPercentage = 0;
    } else if (newBatteryPercentage >= 100){
    batteryPercentage = 100;
    } else {
    batteryPercentage = newBatteryPercentage;
    }
}

void Tesla::chargeBattery(int mins){
    batteryPercentage = batteryPercentage + (0.5*mins);

    if (batteryPercentage >=100){
        batteryPercentage = 100;
    }
}          

void Tesla::drive(int kms){
    if (batteryPercentage >0){
        emissions = 74*kms;
        batteryPercentage = batteryPercentage - (kms/5);
    }  else if (batteryPercentage <= 0){
        emissions = 0;
        batteryPercentage = 0;
    }
    
    if (batteryPercentage <= 0){
        emissions = emissions;
        batteryPercentage = 0;
    }
}