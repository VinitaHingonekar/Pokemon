#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon{

    namespace N_Pokemons{
        
        class Pikachu : public Pokemon{
        private:
            int thunderShockDamage;
        public:
            Pikachu();
            void ThunderShock(Pokemon &target);
        };

    }

}