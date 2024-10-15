#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

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
        Utility::WaitForEnter();
        cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
        Utility::WaitForEnter();
        cout << "Professor Oak: But enough about me. Let's talk about you!\n";
        Utility::WaitForEnter();
    }
    
    void OfferPokemonChoices(Player &player)
    {
        // Asking Player Name
        cout << "Professor Oak: First, tell me, what's your name?\n";
        getline(cin, player.name); 

        cout << "Professor Oak: Ah, " << player.name << "! What a fantastic name!\n";
        Utility::WaitForEnter();
        cout << "Professor Oak: You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";
        Utility::WaitForEnter();

        // Pokemon choices
        cout << "Professor Oak: I have three Pokemon here with me. They're all quite feisty!\n";
        Utility::WaitForEnter();

        
        cout << "Professor Oak: Choose wisely...\n";
        cout << "1. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "2. Charmander - The fire type. A real hothead!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << "Professor Oak: So, which one will it be? Enter the number: ";
        cin >> choice;

        player.ChoosePokemon(choice);
        Utility::WaitForEnter();
    }

    void ExplainMainQuest(Player &player)
    {
        // Utility::ClearConsole();
        cout << "Professor Oak:	Oak-ay  " << player.name << ", I am about to explain you about your upcoming grand adventure." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
        Utility::WaitForEnter();
        cout << player.name << " : Wait... that sounds a lot like every other Pokémon game out there." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.name << "! This is serious business." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak:  Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
        Utility::WaitForEnter();
        cout << player.name << ": Sounds like a walk in the park... right?" << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
        Utility::WaitForEnter();
        cout << player.name << " : Ready as I’ll ever be, Professor!" << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: That’s the spirit! Now, your journey begins." << endl;
        Utility::WaitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards! "  << endl;
    }
};

void GameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;

    while(keepPlaying)
    {
        Utility::ClearConsole();

        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2.Visit PokeCenter" << endl;
        cout << "3.Challenge Gyms" << endl;
        cout << "4.Enter Pokémon League" << endl;
        cout << "5.Quit" << endl;

        cout << "Enter your choice : " ;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\n";
            break;
        case 2:
            cout <<  "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";;
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;            
        
        default:
            cout << "That's not a valid choice. Try again!\n";
            break;
        }
        Utility::WaitForEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

int main() 
{
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);

    ProfessorOak professor("Professor Oak");
    Player player("Vini", charmander);

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    professor.ExplainMainQuest(player);

    GameLoop(player);

    return 0;
}