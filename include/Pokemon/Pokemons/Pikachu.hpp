#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon{

    namespace N_Pokemons{
        
        class Pikachu : public Pokemon{
        public:
            Pikachu();

        private:
            void Attack(Pokemon* target) override;
            void ThunderShock(Pokemon *target);
        };

    }

}