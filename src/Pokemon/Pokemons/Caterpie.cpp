#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Caterpie::Caterpie()
            : Pokemon("Caterpie", PokemonType::BUG, 75, {
                Move("TACKLE", 10),
                Move("STRING SHOT", 5),
                Move("STICKY WEB", 10)
            }) {}

        void Caterpie::Attack(Move selectedMove, Pokemon* target){ 
            Pokemon::Attack(selectedMove, target);

            if(selectedMove.name == "STICKY WEB")
            {
                int reducedDamage = 5;
                target->ReduceAttackPower(reducedDamage);
                std::cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }
    }
}