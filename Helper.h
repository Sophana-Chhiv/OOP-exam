#ifndef HELPER_H
#define HELPER_H
#include <tuple>
#include "GridUnit.h"
#include "ctime"
#include<random>
#include <cmath>

using namespace std;

class Helper
{
public:
    static tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight)
    {
        tuple <int, int> randPos;
        get<0>(randPos) = rand() % gridWidth + 1;
        get<1>(randPos) = rand() % gridHeight + 1;
        return randPos;

    }
    static double calculateDistance(tuple<int, int> coords1, std::tuple<int, int> coords2)
    {
        int dx = get<0>(coords1) - get<0>(coords2);
        int dy = get<1>(coords1) - get<1>(coords2);
        double distance = sqrt(dx * dx + dy * dy);
        return distance;
    }
};

#endif

