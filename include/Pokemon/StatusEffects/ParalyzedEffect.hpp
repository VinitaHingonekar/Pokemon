#pragma once
#include "IStatusEffect.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class ParalyzedEffect : public IStatusEffect
        {
        private:
            int turnsLeft; // Track the remaining turns for the effect
        public:
            void ApplyEffect(Pokemon* target) override;
            std::string GetEffectName() override;
            bool TurnEndEffect(Pokemon* target) override;
            void ClearEffect(Pokemon* target) override;
        };
    }
}