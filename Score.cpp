#include "Score.h"

Score* Score::instance = 0;

Score * Score::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Score();
		return instance;
	}
	else
	{
		return instance;
	}
	return nullptr;
}

void Score::print()
{
	std::cout << "I am Score object!" << std::endl;
}

Score::Score()
{
}


Score::~Score()
{
}
