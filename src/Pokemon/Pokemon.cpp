#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/StatusEffects/ParalyzedEffect.hpp"
#include <iostream>

namespace N_Pokemon {

    using namespace std;
    
    // Default Constructor
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 50;
        appliedEffect = nullptr;
    }

    // Parameterized Constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> p_moves)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_health;
        moves = p_moves;
        appliedEffect = nullptr;
    }

    // Copy Constructor 
    Pokemon::Pokemon(const Pokemon *other)
    {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = other->maxHealth;
        moves = other->moves;
        appliedEffect = nullptr;
    }

    // Destructor
    Pokemon::~Pokemon() 
    {

    }

    void Pokemon::TakeDamage(int damage)
    {
        health -= damage;
        if(health < 0)
        {
            health = 0;
        }
    }

    void Pokemon::SelectAndUseMove(Pokemon* target)
    {
        PrintAvailableMoves();

        int choice = SelectMove();
        Move selectedMove = moves[choice-1];
        
        UseMove(selectedMove, target);
    }

    void Pokemon::ReduceAttackPower(int reducedDamage)
    {
        for (size_t i = 0; i < moves.size(); ++i)
        {
            moves[i].power -= reducedDamage;
            if(moves[i].power < 0)
                moves[i].power = 0;
        }
    }

    bool Pokemon::isFainted()
    {
        return health <= 0;
    }

    void Pokemon::Heal()
    {
        health = maxHealth;
    }

    void Pokemon::Attack(Move selectedMove, Pokemon* target) 
    { 
        target->TakeDamage(selectedMove.power); 
    }

    void Pokemon::PrintAvailableMoves(){
        cout << name << "'s available moves:\n";
    
        // List out all moves for the player to choose from
        for (size_t i = 0; i < moves.size(); ++i) {
            cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
        }
    }

    int Pokemon::SelectMove(){
        // Ask the player to select a move
        int choice;
        cout << "Choose a move: ";
        cin >> choice;

        // Validate the choice
        while (choice < 1 || choice > static_cast<int>(moves.size())) {
        cout << "Invalid choice. Try again: ";
        cin >> choice;
        }

        return choice;
    }

    void Pokemon::UseMove(Move selectedMove, Pokemon* target){
        cout << name << " used " << selectedMove.name << "!\n";
        Attack(selectedMove, target);
        
        N_Utility::Utility::WaitForEnter();

        cout << "...\n"; 
        N_Utility::Utility::WaitForEnter();
        
        if (target->isFainted())
        cout << target->name << " fainted!\n";
        else
        cout << target->name << " has " << target->health << " HP left.\n";
    }

    bool Pokemon::CanAttack()
    {
        if (appliedEffect == nullptr)
            return true;
        else
            appliedEffect->TurnEndEffect(this);
    }

    bool Pokemon::CanApplyEffect()
    {
        return appliedEffect == nullptr;
    }

    void Pokemon::ApplyEffect(StatusEffectType effectToApply)
    {
        switch (effectToApply)
        {
            case StatusEffectType::PARALYZED:
            appliedEffect = new ParalyzedEffect();
            appliedEffect->ApplyEffect(this);
            break;
            default:
            appliedEffect = nullptr;
        }
    }

    void Pokemon::ClearEffect() 
    { 
        appliedEffect = nullptr; 
    }


}