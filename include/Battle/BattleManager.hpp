#pragma once
#include "BattleState.hpp"

// class Player;
class Pokemon;

namespace N_Battle{

    class BattleManager
    {
    public:
        void StartBattle(N_Player::Player &player, Pokemon &wildPokemon);

    private:
        BattleState battleState;

        void Battle();
        void HandleBattleOutcome();
        void UpdateBattleState();
    };
}