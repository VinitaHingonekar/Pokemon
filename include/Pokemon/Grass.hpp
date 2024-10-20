#pragma once
#include <string>
#include <vector>
using namespace std;

namespace N_Pokemon{

    class Pokemon;

    struct Grass 
    {
        string environmentType;
        vector<Pokemon> wildPokemonList;
        int encounterRate;
    };

}