#pragma once
#include "IStatusEffect.hpp"
// #include "../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {

        class ParalyzedEffect : public IStatusEffect
        {
        private:
            int turnsLeft; // Track the remaining turns for the effect
        public:
            // ParalyzedEffect();  // Constructor
            // ~ParalyzedEffect(); // Destructor

            void ApplyEffect(N_Pokemon::Pokemon* target) override;
            std::string GetEffectName() override;
            bool TurnEndEffect(N_Pokemon::Pokemon* target) override;
            void ClearEffect(N_Pokemon::Pokemon* target) override;
        };
    }
}