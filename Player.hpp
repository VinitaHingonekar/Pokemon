#include <string>
using namespace std;

class Player 
{
    public:
    string name;
    Pokemon chosenPokemon;

    // Default Constructor
    Player();
    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon);
    // Copy Constructor 
    Player(const Player &other);
    
    void ChoosePokemon(int choice);
};