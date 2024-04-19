#include "Button.hpp"

Button::Button(sf::Texture& buttonTexture)
{
	this->setTexture(buttonTexture);
}

bool HitButton::isClicked()
{
	return false;
}

bool DoubleDownButton::isClicked()
{
	return false;
}

bool SplitButton::isClicked()
{
	return false;
}

bool StandButton::isClicked()
{
	return false;
}
