#ifndef _BLACKJACK_H_
#define _BLACKJACK_H_

class Blackjack{
public:
	Blackjack();
	void Launch();
private:
	int phit;
	int pstand;
	bool playerDone;
	bool dealerDone;
	void addPlayerCard();
	void addDealerCard();
	void printHand();
	void sumHands();


}




#endif