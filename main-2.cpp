#include <iostream>
#include "Obstacle.h"
#include "Avatar.h"

int main() {
    // Create an Obstacle
    Obstacle obstacle(2, 3);
    std::cout << "Obstacle Coordinates: (" << std::get<0>(obstacle.getCoordinates()) << ", " << std::get<1>(obstacle.getCoordinates()) << ")\n";
    std::cout << "Obstacle Active: " << obstacle.isActive() << "\n";
    std::cout << "Obstacle Entity: " << obstacle.getEntity() << "\n";

    // Create an Avatar
    Avatar avatar(1, 1);
    std::cout << "Avatar Coordinates: (" << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << ")\n";
    std::cout << "Avatar Entity: " << avatar.getEntity() << "\n";

    // Move Avatar to the position of the Obstacle
    avatar.shift(1, 2);
    std::cout << "Avatar New Coordinates: (" << std::get<0>(avatar.getCoordinates()) << ", " << std::get<1>(avatar.getCoordinates()) << ")\n";

    // Apply Obstacle Modifier to Avatar
    obstacle.apply(avatar);
    std::cout << "Avatar Entity after Obstacle applied: " << avatar.getEntity() << "\n";
    std::cout << "Obstacle Active after applying: " << obstacle.isActive() << "\n";

    return 0;
}


