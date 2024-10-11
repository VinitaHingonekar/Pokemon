#include <iostream>
using namespace std;

enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    InvalidChoice
};

enum class PokemonType
{
    FIRE,
    WATER,
    ELECTRIC,
    GRASS
};

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon()
    {
        
    };

    Pokemon(string _name, PokemonType _type, int _health)
    {
        name = _name;
        type = _type;
        health = _health;
    }

    void attack()
    {
        cout << "Attacks with a powerful move!" << endl;
    }
};

class Player
{
public:
    string name;
    Pokemon chosenPokemon;

    void ChoosePokemon(int choice) {
        switch ((PokemonChoice)choice) 
        { 
            case PokemonChoice::CHARMANDER:
                chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100); 
                break; 
            case PokemonChoice::BULBASAUR: 
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100); 
                break; 
            case PokemonChoice::SQUIRTLE: 
                chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100); 
                break; 
            default: 
                chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100); 
                break; 
        }

        cout << "Player " << name << " chose " << chosenPokemon.name << "!" << endl;
    }
};

class ProfessorOak
{
public:
    string name;

    void GreetPlayer(Player &player)
    {
        cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
        cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
        cout << "Professor Oak: But enough about me. Let's talk about you!\n";

        // Asking Player Name
        cout << "Professor Oak: First, tell me, what's your name?\n";
        getline(cin, player.name); 

        cout << "Professor Oak: Ah, " << player.name << "! What a fantastic name!\n";
        cout << "Professor Oak: You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";
    }
    
    void OfferPokemonChoices(Player &player)
    {
        // Pokemon choices
        cout << "Professor Oak: I have three Pokemon here with me. They're all quite feisty!\n";
        cout << "Professor Oak: Choose wisely...\n";
        cout << "1. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "2. Charmander - The fire type. A real hothead!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << "Professor Oak: So, which one will it be? Enter the number: ";
        cin >> choice;

        player.ChoosePokemon(choice);
    }
};

int main() 
{
    Player player;
    ProfessorOak professor;
    Pokemon placeholderPokemon;

    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::ELECTRIC;
    placeholderPokemon.health = 40;

    player.name = "Trainer";

    professor.name = "Professor Oak";

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}