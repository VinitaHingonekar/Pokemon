#include <iostream>
using namespace std;

enum  PokemonChoice
{
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main() {

        int choice;
        string player_name;
        enum PokemonChoice chosen_pokemon = InvalidChoice;

        cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
        cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
        cout << "Professor Oak: But enough about me. Let's talk about you!\n";

        // Asking Player Name
        cout << "Professor Oak: First, tell me, what's your name?\n";
        cin >> player_name;

        cout << "Professor Oak: Ah, " << player_name << "! What a fantastic name!\n";
        cout << "Professor Oak: You must be eager to start your adventure. But "
                    "first, you’ll need a Pokemon of your own!\n";

        // Pokemon choices
        cout << "Professor Oak: I have three Pokemon here with me. They’re all "
                    "quite feisty!\n";
        cout << "Professor Oak: Choose wisely...\n";
        cout << "1. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "2. Charmander - The fire type. A real hothead!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

		cout << "Professor Oak: So, which one will it be? Enter the number: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                chosen_pokemon = Bulbasaur;
                break;
            
            case 2:
                chosen_pokemon = Charmander;
                break;

            case 3:
                chosen_pokemon = Squirtle;
                break;

            default:
                chosen_pokemon = InvalidChoice;
                break;
        }

        switch(chosen_pokemon)
        {
            case Bulbasaur:
                cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!" << endl;
                break;
            
            case Charmander:
                cout << "Professor Oak: A fiery choice! Charmander is yours!" << endl;
                break;

            case Squirtle:
                cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!" << endl;
                break;

            case InvalidChoice:
                cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you." << endl;
                chosen_pokemon = Charmander;
                cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!" << endl;
                break;
        }

        cout << "Professor Oak: " << (chosen_pokemon == Bulbasaur ? "Bulbasaur" : chosen_pokemon == Charmander ? "Charmander" : "Squirtle") << " and you, " << player_name << ", are going to be the best of friends!\n";
        cout << "ProfesVinitasor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}