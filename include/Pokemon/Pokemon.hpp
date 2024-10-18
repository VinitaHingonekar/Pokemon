#pragma once
#include <string>
using namespace std;

enum class PokemonType;

namespace N_Pokemon{

    class Pokemon
    {
    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth = 100;
        int attackPower;

    public:

        // Default Constructor
        Pokemon();

        // Parameterized Constructor
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);

        // Copy Constructor 
        Pokemon(const Pokemon &other);

        // Destructor
        ~Pokemon();

        int GetHealth();
        void SetHealth(int _health);

        int GetMaxHealth();
        void SetMaxHealth(int _maxHealth);

        int GetAttackPower();
        void SetAttackPower(int _attackPower);

        void Attack(Pokemon &target);
        void TakeDamage(int damage);
        bool isFainted();
        void Heal();
    };
    
}