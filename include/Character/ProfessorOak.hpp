#include <iostream>
using namespace std;
// using namespace N_Player;

class Player;

namespace N_Character{

    class ProfessorOak
    {
    public:
        string name;

        ProfessorOak(string p_name);
        void GreetPlayer(N_Player::Player &player);   
        void OfferPokemonChoices(N_Player::Player &player);
        void ExplainMainQuest(N_Player::Player &player);
    };

}