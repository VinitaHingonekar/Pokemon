#pragma once
#include "../Character/Player/Player.hpp"
#include "../Pokemon/Grass.hpp"

// class Player;

namespace N_Main
{
    using namespace N_Pokemon;
    using namespace N_Character::N_Player;

    class Game {
    private:
        Grass forestGrass;
        N_Pokemon::Pokemon *wildPokemon;

    public:
        Game();
        ~Game();
        void GameLoop(Player *player);
        void VisitPokeCenter(Player *player);
    };

}