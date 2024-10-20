#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

    void Balbasaur::Attack(Pokemon* target){
        VineWhip(target);
    }
    
    void Balbasaur::VineWhip(Pokemon *target) {
            cout << name << "Vines lash out at " << target->name << " with a powerful strike!\n";
            N_Utility::Utility::WaitForEnter();

            cout << "...\n"; 
            N_Utility::Utility::WaitForEnter();

            target->TakeDamage(attackPower);

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
            N_Utility::Utility::WaitForEnter();
    }
  }
}