// 1_virtual3
// ���� �Ҹ��� �̾߱�. - 149 page
#include <iostream>

class Shape
{
public:
	~Shape() {}
};

class Rect : public Shape
{
public:
	Rect()  { std::cout << "Rect()" << std::endl; }
	~Rect() { std::cout << "~Rect()" << std::endl; }
};
int main()
{
	Rect rc;  // �� �ڵ� ������ Ȯ���� ������.
}