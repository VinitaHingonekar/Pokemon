#include "include/Main/Game.hpp"
#include "include/Character/Player/Player.hpp"
#include "include/Character/ProfessorOak.hpp"
#include <iostream>

int main() 
{
    N_Character::ProfessorOak professor("Professor Oak");
    N_Character::N_Player::Player player;

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    professor.ExplainMainQuest(player);

    N_Main::Game game;
    game.GameLoop(player);

    return 0;
}