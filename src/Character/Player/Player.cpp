#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;

class Pokemon;

// Default Constructor
Player::Player()
{
    name = "Trainer";
    chosenPokemon = Pokemon();
}

// Parameterized Constructor
Player::Player(string p_name, Pokemon p_chosenPokemon)
{
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void Player::ChoosePokemon(int choice) {
    switch ((PokemonChoice)choice) 
    { 
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10); 
            break; 
        case PokemonChoice::BULBASAUR: 
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8); 
            break; 
        case PokemonChoice::SQUIRTLE: 
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9); 
            break; 
        default: 
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 12); 
            break; 
    }

    cout << "Player " << name << " chose " << chosenPokemon.name << "!" << endl;
    Utility::WaitForEnter();
}