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
        : Pokemon ("Caterpie", PokemonType::BUG, 100, {Move("BUG BITE", 25), Move("STICKY WEB", 10)}) {}

        void Caterpie::Attack(Move selectedMove, Pokemon* target){ 
            Pokemon::Attack(selectedMove, target);

            if(selectedMove.name == "STICKY WEB")
            {
                int reducedDamage = 5;
                target->ReduceAttackPower(reducedDamage);
                std::cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }

        // void Caterpie::BugBite(Pokemon *target){
        //     cout << name << " used BUG BITE!\n";
        //     N_Utility::Utility::WaitForEnter();

        //     cout << "...\n"; 
        //     N_Utility::Utility::WaitForEnter();

        //     target->TakeDamage(attackPower);

        //     if (target->isFainted())
        //         cout << target->name << " fainted!\n";
        //     else
        //         cout << target->name << " has " << target->health << " HP left.\n";
        //     N_Utility::Utility::WaitForEnter();
        // }

    }

}