#include "Game.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "WildEncounterManager.hpp"
// #include "Grass.hpp"
#include "BattleManager.hpp"
#include <iostream>
using namespace std;

Game::Game() { 
// Create a sample grass environment with actual Pokemon objects 
forestGrass = {"Forest", 
                {Pokemon("Pidgey", PokemonType::NORMAL, 40), 
                 Pokemon("Caterpie", PokemonType::BUG, 35), 
                 Pokemon("Zubat", PokemonType::POISON, 30)}, 
                70}; 
 }

void Game::GameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;

    while(keepPlaying)
    {
        BattleManager battleManager;
            WildEncounterManager encounterManager;
            Pokemon encounteredPokemon;
        Utility::ClearConsole();

        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokémon League" << endl;
        cout << "5.Quit" << endl;

        cout << "Enter your choice : " ;
        cin >> choice;


        switch (choice)
        {
        case 1:{
            encounteredPokemon = encounterManager.GetRandomPokemonFromGrass(forestGrass);
            cout << "A wild " << encounteredPokemon.name << " appeared!\n";
            battleManager.StartBattle(player, encounteredPokemon);
            break;
        }
        case 2:{
            cout << "You head to the PokeCenter" << endl;
            player.chosenPokemon.Heal();
            cout << player.chosenPokemon.name << "'s health is fully restored!\n";
            break;
        }
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!\n";
            cout << "Are you sure you want to quit? (y/n): ";
            // char quitChoice;
            // cin >> quitChoice;
            // if (quitChoice == 'y' || quitChoice == 'Y') {
            //     keepPlaying = false;
            // }
            break;            
        
        default:
            cout << "That's not a valid choice. Try again!\n";
            break;
        }

        Utility::WaitForEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}