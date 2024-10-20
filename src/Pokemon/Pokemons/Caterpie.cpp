#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Caterpie::Caterpie() : Pokemon ("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::Attack(Pokemon* target){
            BugBite(target);
        }

        void Caterpie::BugBite(Pokemon *target){
            cout << name << " used BUG BITE!\n";
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