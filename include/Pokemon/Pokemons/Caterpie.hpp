#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon{

    namespace N_Pokemons{
        
        class Caterpie : public Pokemon{
        public:
            Caterpie();

        private:
            void Attack(Pokemon* target) override;
            void BugBite(Pokemon *target);
        };

    }

}