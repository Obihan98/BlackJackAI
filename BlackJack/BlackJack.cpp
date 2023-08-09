#include "BlackJack.h"
#include "HelperFunctions.h"

BlackJack::BlackJack()
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Card currentCard = { j, i };
			deck.insert(std::pair<Card, int>(currentCard, NUMBER_OF_DECKS));
		}
	}

	std::cout << "Shuffling the cards!" << std::endl;
}

void BlackJack::displayCards(const std::vector<Card>& cards)
{
    // Display cards side by side
    for (const Card& card : cards) {
        std::cout << "+-------+ ";
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        if ((RANKS[card.rank - 2]).length() < 2)
        {
            std::cout << "|" << RANKS[card.rank - 2] << "      | ";
        }
        else
        {
            std::cout << "|" << RANKS[card.rank - 2] << "     | ";
        }
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        std::cout << "|       | ";
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        std::cout << "|       | ";
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        std::cout << "|       | ";
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        std::cout << "|       | ";
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        if ((RANKS[card.rank - 2]).length() < 2)
        {
            std::cout << "|      " << RANKS[card.rank - 2] << "| ";
        }
        else
        {
            std::cout << "|     " << RANKS[card.rank - 2] << "| ";
        }
    }
    std::cout << std::endl;

    for (const Card& card : cards) {
        std::cout << "+-------+ ";
    }
    std::cout << std::endl;
}

//void BlackJack::hit(Player& player);
//{
//
//    (player.hand).push_back();
//}

Card BlackJack::pickRandomCard()
{
    int randomCardRank = generateRandomInteger(0, 12);
    int randomCardSuit = generateRandomInteger(0, 3);
    Card randomCard = { randomCardRank, randomCardSuit };

    return randomCard;
}

Card BlackJack::drawFromDeck()
{
    Card randomCard = pickRandomCard();
    while (deck[randomCard] == 0)
    {
        randomCard = pickRandomCard();
    }
    deck[randomCard] -= 1;
    std::cout << randomCard.rank << " " << randomCard.suit << std::endl;
    return randomCard;
}

bool operator<(const Card& card1, const Card& card2)
{
	if (card1.suit == card2.suit)
	{
		return (card1.rank < card2.rank);
	}
	else
	{
		return (card1.suit < card2.suit);
	}
}