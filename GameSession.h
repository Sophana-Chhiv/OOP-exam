#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "GridUnit.h"
#include<vector>
#include"Modifier.h"
#include"Obstacle.h"
#include"Avatar.h"
#include"Helper.h"
#include <iostream>
#include <tuple>
#include <ctime>

class GameSession {

private:
    std::vector<GridUnit*> grid;
    int gridWidth;
    int gridHeight;


public:

    GameSession() : gridWidth(0), gridHeight(0) {}

	std::vector<GridUnit*>& getGrid() {
		return grid;
	}

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;
        std::srand(std::time(0));

        // Create avatars
        for (int i = 0; i < numAvatars; ++i) {
            auto [x, y] = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Avatar(x, y));
        }

        // Create obstacles
        for (int i = 0; i < numObstacles; ++i) {
            auto [x, y] = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Obstacle(x, y));
        }
    }

    void gameCycle(int maxCycles, double obstacleActivationDistance) {
        for (int cycle = 0; cycle < maxCycles; ++cycle) {
            std::cout << "Cycle " << cycle + 1 << ":\n";

            // Move avatars
            for (GridUnit* unit : grid) {
                Avatar* avatar = dynamic_cast<Avatar*>(unit);
                if (avatar) {
                    avatar->shift(1, 0);
                    std::cout << "Avatar moved to (" << std::get<0>(avatar->getCoordinates()) << ", " << std::get<1>(avatar->getCoordinates()) << ")\n";
                    if (std::get<0>(avatar->getCoordinates()) >= gridWidth) {
                        std::cout << "Avatar has won the game!\n";
                        return;
                    }
                }
            }

            // Check for nearby obstacles
            for (GridUnit* unit : grid) {
                Avatar* avatar = dynamic_cast<Avatar*>(unit);
                if (avatar) {
                    for (GridUnit* otherUnit : grid) {
                        Obstacle* obstacle = dynamic_cast<Obstacle*>(otherUnit);
                        if (obstacle && obstacle->isActive()) {
                            double distance = Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates());
                            if (distance <= obstacleActivationDistance) {
                                obstacle->apply(*avatar);
                                std::cout << "Obstacle applied to Avatar at (" << std::get<0>(avatar->getCoordinates()) << ", " << std::get<1>(avatar->getCoordinates()) << ")\n";
                            }
                        }
                    }
                }
            }
        }

        std::cout << "Maximum number of cycles reached. Game over.\n";
    }

private:
    void checkForWinCondition() {
        for (GridUnit* unit : grid) {
            Avatar* avatar = dynamic_cast<Avatar*>(unit);
            if (avatar) {
                if (std::get<0>(avatar->getCoordinates()) >= gridWidth) {
                    std::cout << "Avatar has won the game!\n";
                    exit(0);
                }
            }
        }
    }

};

#endif 
