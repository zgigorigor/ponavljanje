#ifndef SCORE_H
#define SCORE_H

#include <iostream>

class Score
{
public:

	static Score* getInstance();
	void print();

private:
	static Score* instance;
	Score();
	~Score();
	
};

#endif //!1