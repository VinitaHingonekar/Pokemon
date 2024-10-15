#include <string>
#include "Pokemon.hpp"
using namespace std;

class Pokemon;

class Player 
{
    public:
    string name;
    Pokemon chosenPokemon;

    // Default Constructor
    Player();
    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon);

    void ChoosePokemon(int choice);
};