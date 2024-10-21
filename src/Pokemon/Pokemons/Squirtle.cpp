#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    using namespace N_Utility;
    
    Squirtle::Squirtle() 
      : Pokemon("Squirtle", PokemonType::WATER, 100, {
          Move("WATER GUN", 20) , 
          Move("RAPID SPIN", 5),
          Move("TACKLE", 5)}
        ) {}
    
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
  }
}