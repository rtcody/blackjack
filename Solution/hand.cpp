#include "hand.hpp"

//Joey working on hand

/// <summary>
	/// Hand constructor that takes in game deck 
	/// </summary>
	/// <param name="gameDeck"></param>
Hand::Hand(Deck gameDeck[])
{

	blackjackHand[0] = gameDeck->getCard(0); 
	gameDeck->shuffle(); 
	blackjackHand[1] = gameDeck->getCard(0); // since we shuffled it can be pulled from the top of the deck 

	cardCount = 2; 
	handValue = computeHandValue(); 

}

int Hand::computeHandValue()
{
	int newHandValue = 0; 

	for (int i = 0; i < cardCount; i++)
	{
		newHandValue += blackjackHand[i].getValue();
	}


	return newHandValue;
}



