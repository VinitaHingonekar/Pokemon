#pragma once
#include <string>
#include "../../Pokemon/Pokemon.hpp"

using namespace std;
using namespace N_Pokemon;

namespace N_Character
{
    namespace N_Player{

        class Player 
        {
        public:
            string name;
            N_Pokemon::Pokemon *chosenPokemon;

            Player();
            Player(string p_name);

            void ChoosePokemon(int choice);
        };
        
    }

}