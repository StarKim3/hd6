// 8_����ʱ�ȭ����Ʈ1 - 85page
#include <iostream>
#include <string>

// �ణ ��ٷο� �����ε�, ��и� �Ƽŵ� �˴ϴ�.
class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
int main()
{
	Person p("kim", 28);
}
