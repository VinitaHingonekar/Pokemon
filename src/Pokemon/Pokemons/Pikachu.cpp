#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;

        Pikachu::Pikachu() : Pokemon ("Pikachu", PokemonType::ELECTRIC, 100, {Move("THUNDER SHOCK", 25), {Move("SUPERSONIC", 80)}}) {}

        void Pikachu::Attack(Move selectedMove, Pokemon* target)
        {
            // target->TakeDamage(selectedMove.power);

            if(selectedMove.name == "THUNDER BOLT")
            {
                if (rand() % 100 < 20)
                {
                    Pokemon::Attack(selectedMove, target);
                    cout << "... and it hit successfully!\n";
                }
                else
                {
                    std::cout << "... but it missed!\n";
                }
            }
            else
                Pokemon::Attack(selectedMove, target);
        }

        // void Pikachu::ThunderShock(Pokemon *target){
        //     cout << name << " uses Thunder Shock on " << target->name << "!\n"; 
        //     target->TakeDamage(20);
        // }

    }

}