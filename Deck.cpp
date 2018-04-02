#include "Deck.h"	
#include "Card.h"
#include <vector>	
#include <string>	
#include <iostream>
//static const std::map<std::string, unsigned> values;
//values = BlackjackMap();


std::vector<int> c_StdValues = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
std::vector<int> c_BjValues = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
std::vector<std::string>  c_ranks = { "ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING" };
std::vector<std::string> c_suits = { "SPADE", "HEART", "CLUB", "DIAMOND" };

Deck::Deck()
{
	int cindex = 1;
	int i, j;
	std::vector<Card> tempdeck;
	
	for (i=0, j=0; i, j < 13; i++, j++)
	{
		for (int k = 0; k < 4; k++)
		{
			
			//Card testcard = new Card(c_BjValues[i], c_ranks[j], c_suits[k] );
			tempdeck.push_back(Card(c_BjValues[i], c_ranks[j], c_suits[k]));
			
			//_card[cindex] = new Card(c_BjValues[i], c_ranks[j], c_suits[k]);
			
			
			
		}
		//cindex++;
	}
	_deck = tempdeck;
}