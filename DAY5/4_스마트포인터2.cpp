// 4_����Ʈ������1 - 201
#include <iostream>

class Car
{
	int color;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

// �Ʒ� Ŭ������ �ٽ��Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = nullptr) : obj(p) {}

	~Ptr() { delete obj; } 

	Car* operator->() { return obj; }
};

int main()
{
//	Car* p = new Car;
	Ptr p = new Car;

	p->Go();
}