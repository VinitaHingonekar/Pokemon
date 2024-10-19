#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
    void Balbasaur::VineWhip(Pokemon &target) {
      cout << name << " uses vine Whip on " << target.name << "!\n";
      target.TakeDamage(20);
    }
  }
}