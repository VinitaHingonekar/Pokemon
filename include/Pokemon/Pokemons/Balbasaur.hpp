#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Balbasaur : public Pokemon {
    private:
      void Attack(Pokemon* target) override;
      void VineWhip(Pokemon *target);
    
    public:
      Balbasaur();
      
    };
    
  }
}