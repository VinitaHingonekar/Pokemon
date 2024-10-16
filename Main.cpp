#include "Game.hpp"
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits>
#include <string>

int main() 
{
    ProfessorOak professor("Professor Oak");
    Player player;

    professor.GreetPlayer(player);
    professor.OfferPokemonChoices(player);

    professor.ExplainMainQuest(player);

    Game game;
    game.GameLoop(player);

    return 0;
}