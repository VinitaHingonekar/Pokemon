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
    int damage = attackPower;
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

void Pokemon::Heal()
{
    health = maxHealth;
}