#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Balbasaur : public Pokemon {
    public:
      Balbasaur();
      void Attack(Move selectedMove, Pokemon* target) override;
    };
  }
}