#include "BattleState.hpp"

class Player;
class Pokemon;

class BattleManager
{
public:
    void StartBattle(Player &player, Pokemon &wildPokemon);

private:
    BattleState battleState;

    void Battle();
    void HandleBattleOutcome();
    void UpdateBattleState();
};