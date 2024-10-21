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
            std::cout << target->name << " is Burnig! It will lose HP each turn!\n";
            turnsLeft = (rand() % 3 ) + 1;
        }

        std::string ParalyzedEffect::GetEffectName()
        {
            return "Burned";
        }

        bool ParalyzedEffect::TurnEndEffect(Pokemon* target)
        {
            if(turnsLeft <= 0)
            {
                ClearEffect(target);
                return true;
            }

            turnsLeft--;
            int burnChance = rand() % 4;

            if (burnChance == 0)
            {
                std::cout << target->name << " is burning! It will lose HP!\n";
                return false;
            }

            std::cout << target->name << " shakes off the burning effect momentarily and will not lose hp!\n";
            return true;
        }

        void ParalyzedEffect::ClearEffect(Pokemon* target)
        {
            std::cout << target->name << " is no longer burning!\n";
            // target->ClearEffect();
        }
    }
}