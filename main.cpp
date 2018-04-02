#include <iostream>
#include<string>
#include "Card.h"
#include "Deck.h"


int main(){
		/*string playerName;

		cout << "Welcome to BlackJack" << endl;
		cout << "Please enter your name: ";
		cin >> playerName;
		cout << "Loading game for " << playerName << endl;

		Blackjack.Launch();
		*/

	std::cout << "test deck";
	//Card Testcard = Card(1, Card::CLUB);
	Deck deck1;
	//int *i = deck->cardSet[0];
	std::vector<Card>::iterator d_iter;
	for (d_iter = deck1._deck.begin(); d_iter != deck1._deck.end(); ++d_iter)
	{
		std::cout << deck1._deck[d_iter].getValue() << std::endl;
	}
	
	
	return 0;
}

