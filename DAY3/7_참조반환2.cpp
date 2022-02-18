#include <iostream>

class Counter
{
public:
	int cnt = 0;

	Counter increment()
	{
		++cnt;
		return *this;
	}

	~Counter()
	{
		std::cout << "~Counter()" << std::endl;
	}
};
int main()
{
	Counter c;
//	c.increment();
//	c.increment();
	std::cout << "----------------------" << std::endl;
	c.increment().increment().increment(); 
	std::cout << "----------------------" << std::endl;

	std::cout << c.cnt << std::endl; // ???
}