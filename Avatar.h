#ifndef AVARTAR_H
#define AVARTAR_H

#include "GridUnit.h"
#include <vector>

class Avatar : public GridUnit {
public:
    Avatar(int x, int y) : GridUnit(x, y, 'A') {}

    void shift(int dx, int dy) {
        coordinates = make_tuple(get<0>(coordinates) + dx, get<1>(coordinates) + dy);

    }
};

#endif 
