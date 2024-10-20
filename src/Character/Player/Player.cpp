#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

class Pokemon;

namespace N_Character
{
    namespace N_Player{

        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        // Default Constructor
        Player::Player()
        {
            name = "Trainer";
            chosenPokemon = N_Pokemon::Pokemon();
        }

        // Parameterized Constructor
        Player::Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon)
        {
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        void Player::ChoosePokemon(int choice) {
            switch ((PokemonChoice)choice) 
            { 
                case PokemonChoice::CHARMANDER:
                    chosenPokemon = N_Pokemon::Pokemon("Charmander", PokemonType::FIRE, 100, 10); 
                    break; 
                case PokemonChoice::BULBASAUR: 
                    chosenPokemon = N_Pokemon::Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8); 
                    break; 
                case PokemonChoice::SQUIRTLE: 
                    chosenPokemon = N_Pokemon::Pokemon("Squirtle", PokemonType::WATER, 100, 9); 
                    break; 
                default: 
                    chosenPokemon = N_Pokemon::Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 12); 
                    break; 
            }

            cout << "Player " << name << " chose " << chosenPokemon.name << "!" << endl;
            Utility::WaitForEnter();
        }
        
    }
}