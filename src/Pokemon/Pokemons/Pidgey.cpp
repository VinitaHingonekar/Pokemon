#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Pidgey::Pidgey() : Pokemon ("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::WingAttack(Pokemon &target){
            cout << name << " uses Thunder Shock on " << target.name << "!\n"; 
            target.TakeDamage(35);
        }

    }

}