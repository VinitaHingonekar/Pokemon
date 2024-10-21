#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon{

    namespace N_Pokemons{
        
        class Charmander : public Pokemon{
        public:
            Charmander();
            void Attack(Move selectedMove, Pokemon* target) override;
        };

    }

}