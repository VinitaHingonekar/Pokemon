#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Squirtle : public Pokemon {
    private:
        void Attack(Pokemon* target) override;
        void WaterSplash(Pokemon *target);
    
    public:
        Squirtle();
      
    };
    
  }
}