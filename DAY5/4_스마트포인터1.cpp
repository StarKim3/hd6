// 4_����Ʈ������1 - 201
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

	delete p; // new�� ��ü�� ����� �ݵ�� delete �ؾ� �մϴ�.
}