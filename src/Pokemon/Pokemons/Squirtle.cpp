#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    using namespace N_Utility;
    
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 20) {}
    
    void Squirtle::Attack(Pokemon* target){
      WaterSplash(target);
    }

    void Squirtle::WaterSplash(Pokemon *target) {
      cout << name << " used WATER SPLASH!\n";
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