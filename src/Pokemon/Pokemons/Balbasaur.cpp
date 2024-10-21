#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>
#include <vector>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Balbasaur::Balbasaur() 
    : Pokemon("Balbasaur", PokemonType::FIRE, 100, 
    { Move("VINE WHIP", 25),
      Move("TACKLE", 10)
}) 
    {}

    void Balbasaur::Attack(Move selectedMove, Pokemon* target){
        Pokemon::Attack(selectedMove, target);
        // SelectAndUseMove(target);
        // target->TakeDamage(selectedMove.power);

        if(selectedMove.name == "VINE WHIP")
        {
          int secondHitChance = rand() % 2;

          if(secondHitChance == 1)
          {
            Pokemon::Attack(selectedMove, target);
            cout << name << " hit again with a second " << selectedMove.name << endl;
          }
          else{
            cout << target->name << " dodged the second hit." << endl;
          }
        }
    }
    
    // void Balbasaur::VineWhip(Pokemon *target) {
    //         cout << name << "Vines lash out at " << target->name << " with a powerful strike!\n";
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