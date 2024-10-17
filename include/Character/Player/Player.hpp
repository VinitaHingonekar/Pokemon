#pragma once
#include <string>
#include "../../Pokemon/Pokemon.hpp"
using namespace std;
using namespace N_Pokemon;

// class Pokemon;
namespace N_Player{

    class Player 
    {
    public:
        string name;
        Pokemon chosenPokemon;

        // Default Constructor
        Player();
        // Parameterized Constructor
        Player(string p_name, Pokemon p_chosenPokemon);

        void ChoosePokemon(int choice);
    };
    
}