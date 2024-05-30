#include "GameSession.h"

int main() {
    GameSession game;
    game.initGameSession(2, 2, 10, 10); // 2 Avatars, 2 Obstacles, 10x10 grid
    game.gameCycle(20, 2.0); // Max 20 cycles, Obstacle activation distance of 2.0
    return 0;
}