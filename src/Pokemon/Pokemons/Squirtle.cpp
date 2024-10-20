#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 20) {}
    
    void Squirtle::Attack(Pokemon* target){
      WaterSplash(target);
    }

    void Squirtle::WaterSplash(Pokemon *target) {
      cout << name << " uses Water splash on " << target->name << "!\n";
      target->TakeDamage(20);
    }
  }
}