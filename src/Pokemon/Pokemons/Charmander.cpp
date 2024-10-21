#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Charmander::Charmander() : Pokemon ("Charmander", PokemonType::FIRE, 100, {Move("FLAME THROWER", 35), Move("BLAZING CHARGE", 70)}) {}

        void Charmander::Attack(Move selectedMove, Pokemon* target){
            Pokemon::Attack(selectedMove, target);
           
            if(selectedMove.name == " BLAZING CHARGE")
            {
                this->TakeDamage(10);
                cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::WaitForEnter();
            }
        }

        // void Charmander::FlameThrower(Pokemon *target){
        //     cout << name << " breathes in...\n";
        //     N_Utility::Utility::WaitForEnter();

        //     cout << "and unleashes a burst of flames..\n"; 
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