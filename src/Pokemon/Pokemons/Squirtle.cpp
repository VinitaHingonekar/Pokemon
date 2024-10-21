#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    using namespace N_Utility;
    
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, {Move("BUG BITE", 20) , {Move("RAPID SPIN", 5)}}) {}
    
    void Squirtle::Attack(Move selectedMove, Pokemon* target){

        Pokemon::Attack(selectedMove, target);

        if(selectedMove.name == "RAPID SPIN")
        {
          int randomHits = (rand() % 4) + 2;
        
          for(int i = 0; i < randomHits; i++)
          {
            Pokemon::Attack(selectedMove, target);
          }

          cout << "... and hit " << randomHits << " times!\\n";
        }
    }

    // void Squirtle::WaterSplash(Pokemon *target) {
    //   cout << name << " used WATER SPLASH!\n";
    //         N_Utility::Utility::WaitForEnter();

    //         cout << "...\n"; 
    //         N_Utility::Utility::WaitForEnter();

    //         target->TakeDamage(attackPower);

    //         if (target->isFainted())
    //             cout << target->name << " fainted!\n";
    //         else
    //             cout << target->name << " has " << target->health << " HP left.\n";
    //         N_Utility::Utility::WaitForEnter();
    // }
  }
}