#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Pidgey::Pidgey() : Pokemon ("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::Attack(Pokemon* target){
            WingAttack(target);
        }

        void Pidgey::WingAttack(Pokemon *target){
            cout << name << " used a powerful WING ATTACK!\n";
            N_Utility::Utility::WaitForEnter();

            cout << "...\n"; 
            N_Utility::Utility::WaitForEnter();

            target->TakeDamage(attackPower);

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
            N_Utility::Utility::WaitForEnter();
        }

    }

}