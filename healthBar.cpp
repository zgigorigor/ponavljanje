#include "healthBar.h"

#include<iostream>


healthBar * healthBar::getInstance()
{
	return nullptr;
}

void healthBar::print()
{
	std::cout << "I am health bar object!" << std::endl;
}

healthBar::healthBar()
{
}


healthBar::~healthBar()
{
}
