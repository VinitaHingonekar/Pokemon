#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/Move.hpp"
using namespace std;


namespace N_Pokemon{
    enum class PokemonType;
    struct Move;

    class Pokemon
    {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        vector<Move> moves;

    public:

        // Default Constructor
        Pokemon();

        // Parameterized Constructor
        Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> moves);

        // Copy Constructor 
        Pokemon(const Pokemon &other);

        // Destructor
        ~Pokemon();

        // int GetName();
        // void SetName(int _name);

        // int GetHealth();
        // void SetHealth(int _health);

        // int GetMaxHealth();
        // void SetMaxHealth(int _maxHealth);

        // int GetAttackPower();
        // void SetAttackPower(int _attackPower);

        virtual void Attack(Move selectedMove, Pokemon *target) = 0;
        // void Attack(Move selectedMove, Pokemon* target) { target->TakeDamage(selectedMove.power); }
        void TakeDamage(int damage);
        bool isFainted();
        void Heal();
        void SelectAndUseMove(Pokemon *target);
        void ReduceAttackPower(int reducedDamage);

    protected:
        void UseMove(Move selectedMove, Pokemon* target);
        int SelectMove();
        void PrintAvailableMoves();

    };
    
}