#ifndef _CARD_H_
#define _CARD_H_
#include<string>



class Card
{
public:
	unsigned int value;
	std::string rank;
	std::string suit;
	/*const int ACE = 11;
	const int JACK = 10;
	const int QUEEN = 10;
	const int KING = 10;
	

	*/
	/*enum Suit{			// reverse order to use SUIT size in games. 0->4
		SPADE = 1,
		HEART = 2,
		CLUB = 3,
		DIAMOND = 4*/
	
	
	Card();
	Card(const Card& copy);
	Card(unsigned int value, std::string rank, std::string suit);
	//void setID(const int& ID);
	//~Card();

	unsigned getValue() const;
	std::string getRank() const;
	//Suit getSuit() const;
	std::string getSuit() const;


private:
	//int id;
	std::string cardRank;
	std::string cardSuit;
	unsigned int cardValue;
};


#endif