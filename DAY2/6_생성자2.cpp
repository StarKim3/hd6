#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int age;

public:
	Person()
	{
		name = "lee";
		age = 28;
	}
	// �����ڴ� ���ڰ� �־ �ǰ� ��� �˴ϴ�. 
	// 2�� �̻� ����� �ֽ��ϴ�.(overloading �ȴٴ� �ǹ�)
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}

	// �Ҹ��� : ��ü�� �ı� �ɶ� ȣ��.
	// ���ڸ� ������ ����, ���� �Ѱ��� ����� �ִ�.
	~Person()
	{
		std::cout << "~Person()" << std::endl;
	}
};
int main()
{
	Person p1;				// ���ڰ� ���� ������ ȣ��
	Person p2("kim", 30);	// ���ڰ� 2���� ������ ȣ��

	std::cout << "-----------" << std::endl;
}



