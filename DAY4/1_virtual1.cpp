// 1_virtual1 - 144page
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; }
};

class Dog : public Animal
{
public:
};
int main()
{
	Animal a; a.cry1();
	Dog    d; d.cry1();
}