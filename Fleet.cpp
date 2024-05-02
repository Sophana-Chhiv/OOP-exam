#include "Fleet.h"
#include <iostream>

Fleet::Fleet(){
    fleet = new Car*[5];
}                        
/* creates a fleet containing pointers to 5 Car objects as an array;     
the array should have Tesla, Ford, Car, Ford, Tesla.
*/


Car Fleet::**get_fleet(){
    return fleet;
}      // Returns the array of pointers to the five Car objects