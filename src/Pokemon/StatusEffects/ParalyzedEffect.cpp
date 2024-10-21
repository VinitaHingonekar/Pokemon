#include "../../../include/Pokemon/StatusEffects/IStatusEffect.hpp"
#include "../../../include/Pokemon/StatusEffects/ParalyzedEffect.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include<iostream>

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void ParalyzedEffect::ApplyEffect(Pokemon* target)
        {
            std::cout << target->name << " is paralyzed! It may not be able to move!\n";
            turnsLeft = (rand() % 3 ) + 1;
        }

        std::string ParalyzedEffect::GetEffectName()
        {
            return "Paralyzed";
        }

        bool ParalyzedEffect::TurnEndEffect(Pokemon* target)
        {
            if(turnsLeft <= 0)
            {
                ClearEffect(target);
                return true;
            }

            turnsLeft--;
            int paralysisChance = rand() % 4;

            if (paralysisChance == 0)
            {
                std::cout << target->name << " is paralyzed! It can't move!\n";
                return false;
            }

            std::cout << target->name << " shakes off the paralysis momentarily and can move!\n";
            return true;
        }

        void ParalyzedEffect::ClearEffect(Pokemon* target)
        {
            std::cout << target->name << " is no longer paralyzed!\n";
            // target->ClearEffect();
        }
    }
}