#pragma once
#include "../Pokemon/Grass.hpp"

class Player;

namespace N_Main{

    class Game {
    private:
        Grass forestGrass;
    public:
        Game();
        void GameLoop(N_Player::Player &player);
        void VisitPokeCenter(N_Player::Player &player);
    };

}