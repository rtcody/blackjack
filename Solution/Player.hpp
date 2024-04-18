#include "hand.hpp"

class Player : public Hand
{
public:
	Player(); 
	void displayHand(); 
private:

	int xCordForNextCard; 
	int yCordForNextCard; 

};