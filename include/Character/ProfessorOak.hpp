#include <iostream>
using namespace std;
#include "Player/Player.hpp"

class Player;

namespace N_Character{
    using namespace std;
    using namespace N_Player;
    
    class ProfessorOak
    {
    public:
        string name;

        ProfessorOak(string p_name);
        void GreetPlayer(N_Player::Player *player);   
        void OfferPokemonChoices(N_Player::Player *player);
        void ExplainMainQuest(N_Player::Player *player);
    };

}