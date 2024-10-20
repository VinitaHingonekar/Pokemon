#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Zubat::Zubat() : Pokemon ("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::Attack(Pokemon* target){
            Supersonic(target);
        }

        void Zubat::Supersonic(Pokemon *target){
            cout << name << " uses Thunder Shock on " << target->name << "!\n"; 
            target->TakeDamage(20);
        }

    }

}