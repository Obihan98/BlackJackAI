#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>

const std::string RANKS[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
const int NUMBER_OF_DECKS = 6;

struct Card
{
	int rank;
	int suit;
};

struct Player
{
	std::vector<Card> hand;
};

class BlackJack
{
private:
	std::map<Card, int> deck;
public:
	BlackJack();

	void displayCards(const std::vector<Card>& cards);
	//void hit(Player& player);

	Card pickRandomCard();
	Card drawFromDeck();
};

bool operator<(const Card& t1, const Card& t2);