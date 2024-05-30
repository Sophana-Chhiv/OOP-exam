#ifndef OBSTACLE_H
#define OBSTACLE_H
#include"GridUnit.h"
#include"Modifier.h"
#include <tuple>
using namespace std;

class Obstacle : public GridUnit, public Modifier
{
private:
    bool active;

public:
    Obstacle(int x, int y) : GridUnit(x, y, 'O'), active(true) {};

    ~Obstacle() {}

    bool isActive() const {
        return active;
    }

    void apply(GridUnit& unit) {
        if (active) {
            unit.setEntity('O');
            active = false;
        }
    }
};




#endif 
