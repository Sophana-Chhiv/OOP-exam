#ifndef HELPER_H
#define HELPER_H
#include <tuple>
#include "GridUnit.h"
#include<random>
#include <cmath>
#include <cstdlib>

using namespace std;

class Helper
{
public:
    static tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight)
    {
        int x = std::rand() % gridWidth;
        int y = std::rand() % gridHeight;
        return std::make_tuple(x, y);

    }
    static double calculateDistance(tuple<int, int> coords1, std::tuple<int, int> coords2)
    {
        int x1, y1, x2, y2;
        std::tie(x1, y1) = coords1;
        std::tie(x2, y2) = coords2;
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};


#endif

