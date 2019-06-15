#ifndef HEALTH_BAR
#define HEALTH_BAR


class healthBar
{
public:

	static healthBar* getInstance();
	void print();

private:
	static healthBar* instance;
	healthBar();
	~healthBar();
};

#endif // !HEALTH_BAR
