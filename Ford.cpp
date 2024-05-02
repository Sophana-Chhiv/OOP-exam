#include "Ford.h"
#include <iostream>

Ford::Ford():badgeNumber(0), litresOfFuel(0){}        
Ford::Ford(int badgeNumber, float litresOfFuel):badgeNumber(badgeNumber), litresOfFuel(litresOfFuel){} 

        int Ford::get_badgeNumber(){return badgeNumber;}
        void Ford::set_badgeNumber(int newbadgeNumber){badgeNumber = newbadgeNumber;}
        float Ford::get_litresOfFuel(){return litresOfFuel;}
        void Ford::set_litresOfFuel(float newlitresOfFuel){litresOfFuel = newlitresOfFuel;}

void Ford::refuel(int litres){
    litresOfFuel += litres;
    
    if (litresOfFuel >= 60){
    litresOfFuel = 60;
    }      
}

void Ford::drive(int kms){
    if (litresOfFuel >0){
        emissions = 234*kms;
        litresOfFuel = litresOfFuel - (kms/5);
    }  else if (litresOfFuel <= 0){
        emissions = 0;
        litresOfFuel = 0;
    }
    
    if (litresOfFuel <= 0){
        emissions = emissions;
        litresOfFuel = 0;
    }
} 