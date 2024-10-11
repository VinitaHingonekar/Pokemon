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
    GRASS,
    NORMAL
};

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    // Default Constructor
    Pokemon()
    {
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
        cout << "A new Pokemon has been created with the default constructor!\n";
    };

    // Parameterized Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    // Copy Constructor 
    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    // Destructor
    ~Pokemon() {
        cout << name << " has been released.\n";
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

    // Default Constructor
    Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon();
        cout << "A new player named " << name << " has been created!" << endl; 
    }

    // Parameterized Constructor
    Player(string p_name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created!\n";
    }

    // Copy Constructor 
    Player(const Player &other)
    {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
    }

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

    ProfessorOak(string p_name) {
        name = p_name;
    }

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
    Pokemon defaultPokemon;
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);

    cout << "Pokemon Details" << endl;
    cout << "Name : " << defaultPokemon.name << "\nType : " << (int)defaultPokemon.type << "\nHealth : " << defaultPokemon.health << endl;
    cout << "Name : " << charmander.name << "\nType : " << (int)charmander.type << "\nHealth : " << charmander.health << endl;

    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100);
    Pokemon bulbasaurCopy = bulbasaur;

    cout << "Pokemon Details" << endl;
    cout << "Name : " << bulbasaur.name << "\nType : " << (int)bulbasaur.type << "\nHealth : " << bulbasaur.health << endl;
    cout << "Name : " << bulbasaurCopy.name << "\nType : " << (int)bulbasaurCopy.type << "\nHealth : " << bulbasaurCopy.health << endl;

    bulbasaurCopy.health = 80;
    cout << "Name : " << bulbasaur.name << "\nType : " << (int)bulbasaur.type << "\nHealth : " << bulbasaur.health << endl;
    cout << "Name : " << bulbasaurCopy.name << "\nType : " << (int)bulbasaurCopy.type << "\nHealth : " << bulbasaurCopy.health << endl;

    {
        Pokemon squirtle("Squirtle", PokemonType::WATER, 100);
    } 

    ProfessorOak professor("Professor Oak");
    Player player("Vini", bulbasaur);

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}