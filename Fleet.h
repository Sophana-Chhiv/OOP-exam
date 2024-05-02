#ifndef FLEET_H
#define FLEET_H
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

class Fleet {

private:
Car** fleet;

Fleet();                         
/* creates a fleet containing pointers to 5 Car objects as an array;     
the array should have Tesla, Ford, Car, Ford, Tesla.
*/

Car **get_fleet();      // Returns the array of pointers to the five Car objects

};

 

#endif