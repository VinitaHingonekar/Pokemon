#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;

        Zubat::Zubat() : Pokemon ("Zubat", PokemonType::POISON, 100, 20) {}

        void Zubat::Attack(Pokemon* target){
            Supersonic(target);
        }

        void Zubat::Supersonic(Pokemon *target){
            // cout << name << " uses Supersonic on " << target->name << "!\n"; 
            // target->TakeDamage(20);

            cout << name << " used SUPERSONIC!\n";
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