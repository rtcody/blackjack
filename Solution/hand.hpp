#pragma once

#include "deck.hpp" 

//Joey working on hand 
class Hand 
{

public: 
	/// <summary>
	/// Hand constructor that takes in game deck 
	/// </summary>
	/// <param name="gameDeck"></param>
	Hand(Deck gameDeck[]); 
	virtual void displayHand() = 0; // will have a different display hand in both the player and dealer class
	int computeHandValue(); 
	

private: 
	card blackjackHand[11]; // 11 is the most cards you can have (All Aces) 
	int cardCount; // used to ensure we do not go out of bounds in the array; 
	int handValue; // total value of the hand 
	
};