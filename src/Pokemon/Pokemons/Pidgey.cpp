#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Pidgey::Pidgey() : Pokemon ("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::Attack(Pokemon* target){
            WingAttack(target);
        }

        void Pidgey::WingAttack(Pokemon *target){
            cout << name << " uses Wing Attack on " << target->name << "!\n"; 
            target->TakeDamage(35);
        }

    }

}