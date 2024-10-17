#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <cstdlib>
#include <ctime>

using namespace N_Pokemon;

namespace N_Battle {

    void WildEncounterManager() 
    {
        srand(time(0));
    }

    N_Pokemon::Pokemon GetRandomPokemonFromGrass(const N_Pokemon::Grass &grass)
    {
        int randomIndex = rand() % grass.wildPokemonList.size();
        return grass.wildPokemonList[randomIndex];
    }
    
}