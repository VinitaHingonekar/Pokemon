#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Balbasaur : public Pokemon {
    private:
    void VineWhip(Pokemon &target);
    
    public:
      Balbasaur();
      
    };
    
  }
}