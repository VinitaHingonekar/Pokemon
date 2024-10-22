#pragma once
#include <string>
#include <vector>
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Pokemon/StatusEffects/IStatusEffect.hpp"
#include "../../include/Pokemon/StatusEffects/StatusEffectType.hpp"
// using namespace std;
using namespace std;
using namespace N_Pokemon::N_StatusEffects;

namespace N_Pokemon{
    enum class PokemonType;
    struct Move;
    // using namespace N_Pokemon::N_StatusEffects;

    class Pokemon
    {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        vector<Move> moves;
        N_Pokemon::N_StatusEffects::IStatusEffect* appliedEffect;

        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> moves);
        Pokemon(const Pokemon *other);

        bool isFainted();
        void Heal();
        virtual void Attack(Move selectedMove, Pokemon *target) = 0;
        void TakeDamage(int damage);
        void SelectAndUseMove(Pokemon *target);
        void ReduceAttackPower(int reducedDamage);
        
        bool CanAttack();
        bool CanApplyEffect();
        void ApplyEffect(StatusEffectType effectToApply);
        void ClearEffect();

    protected:
        void PrintAvailableMoves();
        int SelectMove();
        void UseMove(Move selectedMove, Pokemon* target);

    };
    
}