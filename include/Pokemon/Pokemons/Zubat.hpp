#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon{

    namespace N_Pokemons{
        
        class Zubat : public Pokemon{
        public:
            Zubat();

        private:
            void Attack(Pokemon* target) override;
            void Supersonic(Pokemon *target);
        };

    }

}