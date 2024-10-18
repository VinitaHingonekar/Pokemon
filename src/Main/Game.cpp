#pragma once
#include "../../include/Main/Game.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include <iostream>
using namespace std;
using namespace N_Player;
using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Main{

    Game::Game() { 
    // Create a sample grass environment with actual Pokemon objects 
    forestGrass = {"Forest", 
                    {Pokemon("Pidgey", PokemonType::NORMAL, 40, 7), 
                    Pokemon("Caterpie", PokemonType::BUG, 35, 5), 
                    Pokemon("Zubat", PokemonType::POISON, 30, 8)}, 
                    70}; 
    }

    void GameLoop(Player &player)
    {
        bool keepPlaying = true;
        int choice;

        BattleManager battleManager;
        WildEncounterManager encounterManager;
        Pokemon wildPokemon;

        while(keepPlaying)
        {
            Utility::ClearConsole();

            cout << "What would you like to do next, " << player.name << "?" << endl;
            cout << "1. Battle Wild Pokémon" << endl;
            cout << "2.Visit PokeCenter" << endl;
            cout << "3.Challenge Gyms" << endl;
            cout << "4.Enter Pokémon League" << endl;
            cout << "5.Quit" << endl;

            cout << "Enter your choice : " ;
            cin >> choice;

            Utility::ClearInputBuffer();

            switch (choice)
            {
            case 1:{
                wildPokemon = encounterManager.GetRandomPokemonFromGrass(forestGrass);
                battleManager.StartBattle(player, wildPokemon);
                break;
            }
            case 2:{
                VisitPokeCenter(player);
                break;
            }
            case 3:
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
                break;
            case 4:
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";
                break;
            case 5:{
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!\n";
                cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;            
            }
            default:
                cout << "That's not a valid choice. Try again!\n";
                break;
            }

            Utility::WaitForEnter();
        }
        cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
    }

    void VisitPokeCenter(Player &player)
    {
        if(player.chosenPokemon.health == player.chosenPokemon.maxHealth)
        {
            cout << "Your Pokémon is already at full health!" << endl;
        }
        else
        {
            cout << "You head to the PokeCenter.\n";
            cout << "Healing your Pokémon...\n";
            Utility::WaitForEnter(); // Simulate a short pause for the healing process
            player.chosenPokemon.Heal(); // Heal the player's Pokémon
            cout << player.chosenPokemon.name << "'s health is fully restored!\n";
        }
    }

}