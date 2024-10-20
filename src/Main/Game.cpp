#include "../../include/Main/Game.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Main
{
    using namespace std;
    using namespace N_Utility;
    using namespace N_Pokemon;
    using namespace N_Pokemon::N_Pokemons;
    using namespace N_Battle;
    using namespace N_Character::N_Player;

    Game::Game() {
        forestGrass = {"Forest", {Pidgey(), Caterpie(), Zubat()}, 70};
    }

    void Game::GameLoop(Player *player) {

        int choice;
        bool keepPlaying = true;
        BattleManager battleManager;
        WildEncounterManager encounterManager;
        N_Pokemon::Pokemon wildPokemon;

        while (keepPlaying) {
        // Clear console before showing options
        Utility::ClearConsole();

        // Display options to the player
        cout << "\nWhat would you like to do next, " << player->name << "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::ClearInputBuffer(); // Clear the input buffer

        // Process the player's choice and display the corresponding message
        switch (choice) {
            case 1: {
                wildPokemon = encounterManager.GetRandomPokemonFromGrass(forestGrass);
                battleManager.StartBattle(player, wildPokemon);
                break;
            }
            case 2: {
                VisitPokeCenter(player);
                break;
            }
            case 3: {
                cout << "You march up to the Gym, but it's closed for renovations. Seems "
                "like even Gym Leaders need a break!\n";
                break;
            }
            case 4: {
                cout << "You boldly step towards the Pokémon League... but the "
                "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            }
            case 5: {
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no "
                "quitting in Pokémon training!'\n";
                cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;
            }
            default: {
                cout << "That's not a valid choice. Try again!\n";
                break;
            }
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        N_Utility::Utility::WaitForEnter();
        }

        cout << "Goodbye, " << player->name << "! Thanks for playing!\n";
    }

    void Game::VisitPokeCenter(Player *player) {
        if (player->chosenPokemon.health == player->chosenPokemon.maxHealth) 
        {
            std::cout << "Your Pokémon is already at full health!\n";
        } 
        else 
        {
            std::cout << "You head to the PokeCenter.\n";
            std::cout << "Healing your Pokémon...\n";
            N_Utility::Utility::WaitForEnter(); // Simulate a short pause for the
            // healing process
            player->chosenPokemon.Heal();        // Heal the player's Pokémon
            std::cout << player->chosenPokemon.name << "'s health is fully restored!\n";
        }
    }
}