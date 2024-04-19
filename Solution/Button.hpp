#pragma once
#include "hand.hpp"

class Button : public sf::Sprite 
{
public:
	Button(sf::Texture& buttonTexture);
	virtual bool isClicked() = 0;  


};


class HitButton : public Button
{
public: 
	HitButton(sf::Texture& buttonText) : Button(buttonText)
	{
		this->setPosition(1500, 500);
		this->setScale(6.0f, 6.0f);
	}
	bool isClicked(); 

};

class DoubleDownButton : public Button
{
	DoubleDownButton(sf::Texture& DoubleDownButtonTexture) : Button(DoubleDownButtonTexture)
	{

	}
	bool isClicked(); 
};

class SplitButton : public Button
{
	SplitButton(sf::Texture& SplitTexture) : Button(SplitTexture)
	{

	}
	bool isClicked(); 
};

class StandButton : public Button
{
	StandButton(sf::Texture& StandTexture) : Button(StandTexture)
	{

	}
	bool isClicked(); 
};