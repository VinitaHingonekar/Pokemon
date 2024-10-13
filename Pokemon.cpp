#include "Pokemon.hpp"
#include <iostream>
using namespace std;

// Default Constructor
 Pokemon::Pokemon()
{
    name = "Unknown";
    type = PokemonType::NORMAL;
    health = 50;
}

// Parameterized Constructor
 Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;
}

// Copy Constructor 
 Pokemon::Pokemon(const Pokemon &other)
{
    name = other.name;
    type = other.type;
    health = other.health;
}

// Destructor
Pokemon::~Pokemon() 
{

}

void  Pokemon::attack()
{
    cout << "Attacks with a powerful move!" << endl;
}