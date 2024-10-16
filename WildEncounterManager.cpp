#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include "Pokemon.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager() {
    srand(time(0));
}

Pokemon WildEncounterManager::GetRandomPokemonFromGrass(const Grass &grass)
{
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}