#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include <iostream>
using namespace std;

enum class PokemonType;

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

void Pokemon::Attack(Pokemon &target)
{
    int damage = 10;
    cout << name<< " attacks " << target.name << " for " << damage << " damage!" << endl;
    target.TakeDamage(damage);
}

void Pokemon::TakeDamage(int damage)
{
    health -= damage;
    if(health < 0)
    {
        health = 0;
    }
}

bool Pokemon::isFainted()
{
    return health <= 0;
}

void Pokemon::Battle(Pokemon &pokemon, Pokemon &wildPokemon)
{
    cout << "A wild " << wildPokemon.name << " appeared!" << endl;

    while(!pokemon.isFainted() && !wildPokemon.isFainted())
    {
        pokemon.Attack(wildPokemon);

        if(!wildPokemon.isFainted())
        {
            wildPokemon.Attack(pokemon);
        }
    }

    if(pokemon.isFainted())
    {
        cout << pokemon.name << " has fainted! You lose the battle.\\n";
    } 
    else 
    {
        cout << "You defeated the wild " << wildPokemon.name << "!\\n";
    }
}