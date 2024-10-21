#pragma once
#include<string>

class Pokemon;
namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class IStatusEffect {
        public:
            virtual void ApplyEffect(Pokemon* target) = 0;
            virtual std::string GetEffectName() = 0;
            virtual bool TurnEndEffect(Pokemon* target) = 0;
            virtual void ClearEffect(Pokemon* target) = 0;
        };
    }
}