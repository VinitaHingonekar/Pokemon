#include <string>
#include <vector>
#include "PokemonType.hpp"
#include "Pokemon.hpp"
using namespace std;

struct Grass 
{
    string environmentType;
    vector<Pokemon> wildPokemonList;
    int encounterRate;
};

Grass forestGrass = {
    "Forest",
    {{"Zubat", PokemonType::POISON, 30},{"Pidgey", PokemonType:: NORMAL, 40}, {"Caterpie", PokemonType:: BUG, 35}},
    80
};