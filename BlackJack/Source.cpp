#include "BlackJack.h"
#include "HelperFunctions.h"

int main()
{
	BlackJack game;

    std::vector<Card> myCards;

    Card card1 = game.drawFromDeck();
    Card card2 = game.drawFromDeck();
    Card card3 = game.drawFromDeck();

    myCards.push_back(card1);
    myCards.push_back(card2);
    myCards.push_back(card3);

    std::cout << "Cards:" << std::endl;
    game.displayCards(myCards);
}