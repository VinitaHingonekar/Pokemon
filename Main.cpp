#include "include/Main/Game.hpp"
#include "include/Character/Player/Player.hpp"
#include "include/Pokemon/PokemonChoice.hpp"
#include "include/Pokemon/PokemonType.hpp"
#include "include/Character/ProfessorOak.hpp"
#include "include/Utility/Utility.hpp"
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