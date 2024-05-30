#include <iostream>
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random positions
    auto pos1 = Helper::generateRandomCoordinates(10, 10);
    auto pos2 = Helper::generateRandomCoordinates(10, 10);

    // Print the positions
    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    // Calculate and print the distance between the positions
    double distance = Helper::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << "\n";

    return 0;
}