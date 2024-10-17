#pragma once
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;

class Pokemon;

void BattleManager::StartBattle(Player &player, Pokemon &wildPokemon)
{
    battleState.playerPokemon = player.chosenPokemon;
    battleState.wildPokemon = wildPokemon;
    battleState.playerTurn = true;  // Player starts first
    battleState.battleOngoing = true;

    cout << "A wild " << wildPokemon.name << " appeared!\n";
    Battle();
}

void BattleManager::Battle()
{

    while(battleState.battleOngoing)
    {
            if (battleState.playerTurn)
            {
                battleState.playerPokemon.Attack(battleState.wildPokemon);
            }
            else
            {
                battleState.wildPokemon.Attack(battleState.playerPokemon);
            }

            UpdateBattleState();

            // Switching the turns
            battleState.playerTurn = !battleState.playerTurn;

            Utility::WaitForEnter();
    }

    HandleBattleOutcome();
}

void BattleManager::UpdateBattleState()
{
    if (battleState.playerPokemon.isFainted())
    {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon.isFainted())
    {
        battleState.battleOngoing = false;
    }
}

void BattleManager::HandleBattleOutcome()
{
    if(battleState.wildPokemon.isFainted())
    {
        cout << "You defeated the wild " << battleState.wildPokemon.name << endl;
    }
    else
    {
        cout << battleState.playerPokemon.name << " has fainted! You need to visit the PokeCenter." << endl;
    }
}