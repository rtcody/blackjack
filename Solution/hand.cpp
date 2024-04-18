#include "hand.hpp"

//Joey working on hand

/// <summary>
	/// Hand constructor that takes in game deck 
	/// </summary>
	/// <param name="gameDeck"></param>
Hand::Hand(Deck &gameDeck)
{

	blackjackHand[0] = gameDeck.getCard(0); 
	gameDeck.shuffle(); 
	blackjackHand[1] = gameDeck.getCard(0); // since we shuffled it can be pulled from the top of the deck 

	cardCount = 2; 
	handValue = computeHandValue(); 

}

/// <summary>
	/// computes the numerical value of the entire hand
	/// </summary>
	/// <returns>the total value of the hand</returns>
int Hand::computeHandValue()
{
	int newHandValue = 0; 

	for (int i = 0; i < cardCount; i++)
	{
		newHandValue += blackjackHand[i].getValue(); // computes the hand value 
	}


	return newHandValue;
}

/// <summary>
	/// adds a card to the blackjackHand
	/// </summary>
	/// <param name="gameDeck"></param>
void Hand::hit(Deck &gameDeck)
{
	int i = 0;  

	for (; i <= cardCount; i++)
	{ 
		 // gets to one slot above the current card count 
	} 

	cardCount = i; //total cards added is updated 

	gameDeck.shuffle();  // reshuffle deck 
	 
	blackjackHand[i] = gameDeck.getCard(0);  //adds the card to the hand

}



