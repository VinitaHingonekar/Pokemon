#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {

    using namespace std;
    
    // Default Constructor
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 50;
        attackPower = 10;
    }

    // Parameterized Constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_health;
        attackPower = p_attackPower;
    }

    // Copy Constructor 
    Pokemon::Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;
    }

    // Destructor
    Pokemon::~Pokemon() 
    {

    }

    // string GetName()
    // {
    //     return Pokemon::name;
    // }

    // void SetName(int _name)
    // {
    //     Pokemon::name = _name;
    // }

    // int GetHealth()
    // {
    //     return Pokemon::health;
    // }

    // void SetHealth(int _health)
    // {
    //     Pokemon::health = _health
    // }


    // int GetMaxHealth()
    // {
    //     return Pokemon::maxHealth;
    // }

    // void SetMaxHealth(int _maxHealth)
    // {
    //     Pokemon::maxHealth = _maxHealth
    // }


    // int GetAttackPower()
    // {
    //     return Pokemon::attackPower;
    // }

    // void SetAttackPower(int _attackPower)
    // {
    //     Pokemon::attackPower = _attackPower;
    // }


    void Pokemon::Attack(Pokemon &target)
    {
        cout << name<< " attacks " << target.name << " for " << attackPower << " damage!" << endl;
        target.TakeDamage(attackPower);
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
}