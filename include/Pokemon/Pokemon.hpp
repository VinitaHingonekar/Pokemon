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
        vector<Move> moves;

        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> moves);
        Pokemon(const Pokemon *other);
        ~Pokemon();

        bool isFainted();
        void Heal();
        virtual void Attack(Move selectedMove, Pokemon *target) = 0;
        void TakeDamage(int damage);
        void SelectAndUseMove(Pokemon *target);
        void ReduceAttackPower(int reducedDamage);

    protected:
        void PrintAvailableMoves();
        int SelectMove();
        void UseMove(Move selectedMove, Pokemon* target);

    };
    
}