#pragma once
#include "../Battle/BattleState.hpp"
#include "../Character/Player/Player.hpp"

// class Player;

namespace N_Battle{
    class Pokemon;
    using namespace N_Character::N_Player;

    class BattleManager
    {
    public:
        void StartBattle(Player &player, N_Pokemon::Pokemon &wildPokemon);

    private:
        BattleState battleState;

        void Battle();
        void HandleBattleOutcome();
        void UpdateBattleState();
    };
}