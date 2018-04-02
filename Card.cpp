#include "Card.h"
#include <vector>
#include <string>
//default constr.
Card::Card(){
	cardValue = 0;
	cardRank = "";
	cardSuit = "";
}

//defined constr.
/*
std::vector<int> c_StdValues = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
std::vector<int> c_BjValues = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
std::vector<std::string>  c_ranks = { "ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING" };
std::vector<std::string> c_suits = { "SPADE", "HEART", "CLUB", "DIAMOND" };
*/
Card::Card(unsigned int value, std::string rank, std::string suit)
{
	cardValue = value;
	cardRank = rank;
	cardSuit = suit;
}

Card::Card(const Card& copy)
{
	cardValue = copy.cardValue;
	cardRank = copy.cardRank;
	cardSuit = copy.cardSuit;
}

std::string Card::getRank() const
{
	return cardRank;
}

std::string Card::getSuit() const
{
	return cardSuit;
}

unsigned int Card::getValue() const
{
	return cardValue;
}

