#include <iostream>
using namespace std;

int main() {
    	cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
		cout << "You can choose one of the following Pokémon:\n";
		cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
		cout << "Which Pokémon would you like to choose? Enter the number: ";

        int choice;
        cin >> choice;

        if(choice == 1)
            cout << "You chose Bulbasaur! A wise choice." << endl;
        else if(choice == 2)
            cout << "You chose Charmander! A fiery choice." << endl;
        else if(choice == 3)
            cout << "You chose Squirtle! A cool choice." << endl;
        else
            cout << "Invalid choice. Please restart the game." << endl;

    return 0;
}