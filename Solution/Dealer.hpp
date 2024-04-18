#include "hand.hpp"

class Dealer : public Hand
{
public:
	Dealer();
	void displayHand();

private:

	int xCordForNextCard;
	int yCordForNextCard;
};