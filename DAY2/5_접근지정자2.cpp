#include <iostream>
#include <string>

// struct vs class
// struct : ���� �����ڸ� ǥ������ ������ ����Ʈ�� public
// class  : ���� �����ڸ� ǥ������ ������ ����Ʈ�� private
//			==> �����Ϸ��� class �� �����ϴ�.

// struct �� class ���̴� C++������ �� �������� ���� ��� �����մϴ�.
// �ٸ� ������ ���� ���̰� �ֽ��ϴ�.

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;

public:					
	void setAge(int value)
	{
		if (value > 0 && value < 150)
			age = value;
	}
};
int main()
{
	Person p;

	p.setAge(-10);
}