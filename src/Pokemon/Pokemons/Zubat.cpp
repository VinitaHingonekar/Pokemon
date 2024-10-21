#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Zubat::Zubat() 
            : Pokemon ("Zubat", PokemonType::POISON, 100, {
                Move("BITE", 18), 
                Move("LEECH LIFE", 10)
            }) {}

        void Zubat::Attack(Move selectedMove, Pokemon* target){
            Pokemon::Attack(selectedMove, target);

            if(selectedMove.name == "LEECH LIFE")
            {
                this->health += selectedMove.power * 0.6;
                
                if (this->health > this->maxHealth)
                    this->health = this->maxHealth;
            }
        }
    }
}