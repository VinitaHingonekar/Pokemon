#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Battle/BattleManager.hpp"
#include <iostream>

namespace N_Pokemon{

    namespace N_Pokemons{
        
        using namespace std;
        using namespace N_Utility;
        using namespace N_Battle;

        Pidgey::Pidgey() 
            : Pokemon ("Pidgey", PokemonType::NORMAL, 100, {
                    Move("WING ATTACK", 35), 
                    Move("GUST", 15)}
                ) {}

        void Pidgey::Attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::Attack(selectedMove, target);

            if(selectedMove.name == "GUST")
            {
                if (rand() % 100 < 20)
                {
                    cout <<"... and blew the opponent away!\n";
                    N_Battle::BattleManager::StopBattle();
                    N_Utility::Utility::WaitForEnter();
                }
            }
        }
    }
}