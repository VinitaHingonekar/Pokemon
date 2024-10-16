#include "BattleManager.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;

void BattleManager::StartBattle(Player &player, Pokemon &wildPokemon)
{
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    Battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::Battle(Pokemon &playerPokemon, Pokemon &wildPokemon)
{
    cout << "A wild " << wildPokemon.name << " appeared!" << endl;

    while(!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.Attack(wildPokemon);

        if(!wildPokemon.isFainted())
        {
            wildPokemon.Attack(playerPokemon);
        }

        Utility::WaitForEnter();
    }

    HandleBattleOutcome(playerPokemon, playerPokemon.isFainted());
}

void BattleManager::HandleBattleOutcome(Pokemon &playerPokemon, bool isFainted)
{
    if(!isFainted)
    {
        cout << playerPokemon.name << " is victorious! Keep an eye on your Pokémon's health." << endl;
    }
    else
    {
        cout << playerPokemon.name << " fainted! You need to visit the PokeCenter." << endl;
        Utility::WaitForEnter();
        std::cout << "Game Over.\n";
    }
}