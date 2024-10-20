#include "include/Main/Game.hpp"
#include "include/Character/Player/Player.hpp"
#include "include/Character/ProfessorOak.hpp"
#include <iostream>

using namespace N_Character;
using namespace N_Player;

int main()
{
    N_Character::ProfessorOak *professor = new N_Character::ProfessorOak("Professor Oak");
    N_Player::Player *player = new N_Player::Player;

    professor->GreetPlayer(*player);
    professor->OfferPokemonChoices(*player);

    professor->ExplainMainQuest(*player);

    N_Main::Game *game = new N_Main::Game;
    game->GameLoop(*player);

    delete(professor);
    delete(player);
    delete(game);

    return 0;
}