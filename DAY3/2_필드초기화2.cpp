#include <iostream>

int g = 10;

class Test
{
	int value1 = 0;
	int value2 = ++g;
public:
	Test() {}
	Test(int n) : value2(n) {}
};
int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // �������� ���� ������ ������.. �� ���ñ��?
}