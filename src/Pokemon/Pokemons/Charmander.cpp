#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Caterpie::Caterpie() : Pokemon ("Caterpie", PokemonType::BUG, 100, 35) {}

        void Caterpie::BugBite(Pokemon &target){
            cout << name << " usses Thunder Shock on " << target.name << "!\n"; 
            target.TakeDamage(35);
        }

    }

}