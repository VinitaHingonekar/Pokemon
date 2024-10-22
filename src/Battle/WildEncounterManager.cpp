#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <cstdlib>
#include <ctime>

namespace N_Battle {
    // using namespace N_Pokemon;

    WildEncounterManager::WildEncounterManager() {
        srand(time(0));
    }

    N_Pokemon::Pokemon *WildEncounterManager::GetRandomPokemonFromGrass(const Grass &grass)
    {
        int randomIndex = rand() % grass.wildPokemonList.size();

        N_Pokemon::Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];

        return wildPokemon;
    }
    
}