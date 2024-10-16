#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;

    // Default Constructor
    Pokemon();

    // Parameterized Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    // Copy Constructor 
    Pokemon(const Pokemon &other);

    // Destructor
    ~Pokemon();

    void Attack(Pokemon &target);
    void TakeDamage(int damage);
    bool isFainted();
    void Battle(Pokemon &pokemon, Pokemon &wildPokemon);
};