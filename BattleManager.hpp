class Player;
class Pokemon;

class BattleManager
{
public:
    void StartBattle(Player &player, Pokemon &wildPokemon);
    void Battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
    void HandleBattleOutcome(Pokemon &playerPokemon, bool isFainted);
};