#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <SFML/Graphics.hpp>

using std::string;
using std::vector; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::ios; 

class card
{
public:
	card(void); 
	card(int value, char suit, string image); 
	card(card& copy); 

	int getValue(void); 
	char getSuit(void);  
	string getImage(void); 

	void setValue(int value); 
	void setSuit(char suit); 
	void setImage(string image); 


	void print(void); 

	void createSprite(void);

private:
	int value; 
	char suit; 
	string image;      
	sf::Sprite sprite;
};

card::card()
{
	this->value = 0;
	this->suit = '\0';
	this->image = "\0";
}

card::card(int value, char suit, string image)
{
	this->value = value;
	this->suit = suit;
	this->image = image;
	createSprite();
}

card::card(card& copy)
{
	this->value = copy.value;
	this->suit = copy.suit;
	this->image = copy.image;
	createSprite();
}

int card::getValue()
{
	return value;
}

char card::getSuit()
{
	return suit;
}

string card::getImage()
{
	return image;
}

void card::setValue(int value)
{
	this->value = value;
}

void card::setSuit(char suit)
{
	this->suit = suit;
}

void card::setImage(string image)
{
	this->image = image;
}

void card::print()
{
	cout << "Value: " << value << ", Suit: " << suit << endl;
}

void card::createSprite(void)
{
	sf::Texture texture;
	texture.loadFromFile(image);
	sf::Sprite temp(texture);
	this->sprite = temp;
}

