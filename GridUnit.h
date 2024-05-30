#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>
using namespace std;

class GridUnit
{
public:
    tuple<int, int> coordinates;
    char entity;


public:
    GridUnit(int x, int y, char entity) : coordinates(x, y), entity(entity) {}
    virtual ~GridUnit() = default;

    tuple<int, int> getCoordinates() const {
        return coordinates;
    }

    char getEntity() const { return entity; }


    void setCoordinates(int x, int y) {
        coordinates =  std::make_tuple(x, y);
    }

    void setEntity(char entity) {
        entity = entity;
    }

};


#endif