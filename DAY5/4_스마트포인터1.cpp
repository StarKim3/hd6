// 4_스마트포인터1 - 201
#include <iostream>

class Car
{
	int color;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

int main()
{
	Car* p = new Car;

	p->Go();

	delete p; // new로 객체를 만들면 반드시 delete 해야 합니다.
}