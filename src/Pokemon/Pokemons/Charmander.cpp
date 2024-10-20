#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Charmander::Charmander() : Pokemon ("Caterpie", PokemonType::BUG, 100, 35) {}

        void Charmander::FlameThrower(Pokemon &target){
            cout << name << " usses Flame Thrower on " << target.name << "!\n"; 
            target.TakeDamage(35);
        }

    }

}