//#include <iostream>
//
//int main()
//{
//	std::cout << "Helo svijete" << std::endl;
//	std::cout << "hello" << std::endl;
//
//
//
//}



#include <iostream>

class pauseScreen
{
private:
	/* Here will be the instance stored. */
	static pauseScreen* instance;

	/* Private constructor to prevent instancing. */
	pauseScreen();

public:
	/* Static access method. */
	static pauseScreen* getInstance();
};

/* Null, because instance will be initialized on demand. */
pauseScreen* pauseScreen::instance = 0;

pauseScreen* pauseScreen::getInstance()
{
	if (instance == 0)
	{
		instance = new pauseScreen();
	}

	return instance;
}

pauseScreen::pauseScreen()
{}

int main()
{
	//new Singleton(); // Won't work
	pauseScreen* s = pauseScreen::getInstance(); // Ok
	pauseScreen* r = pauseScreen::getInstance();

	/* The addresses will be the same. */
	std::cout << s << std::endl;
	std::cout << r << std::endl;
}