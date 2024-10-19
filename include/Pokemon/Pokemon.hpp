#pragma once
#include <string>
using namespace std;


namespace N_Pokemon{
    enum class PokemonType;

    class Pokemon
    {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
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

        int GetName();
        void SetName(int _name);

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