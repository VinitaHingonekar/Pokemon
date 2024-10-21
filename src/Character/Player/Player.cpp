#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
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
            // chosenPokemon = N_Pokemon::Pokemon();
        }

        // Parameterized Constructor
        Player::Player(string p_name)
        {
            name = p_name;
        }

        void Player::ChoosePokemon(int choice) {
            switch ((PokemonChoice)choice) 
            { 
                case PokemonChoice::CHARMANDER: 
                    chosenPokemon = new Charmander(); 
                    break; 
                case PokemonChoice::BALBASAUR:
                    chosenPokemon = new Balbasaur(); 
                    break; 
                case PokemonChoice::SQUIRTLE: 
                    chosenPokemon = new Squirtle(); 
                    break; 
                default: 
                    chosenPokemon = new Pikachu(); 
                    break; 
            }

            cout << "Player " << name << " chose " << chosenPokemon->name << "!" << endl;
            Utility::WaitForEnter();
        }
        
    }
}