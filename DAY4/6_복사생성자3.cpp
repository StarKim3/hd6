// 6_���������3 - 102 page !!
#include <iostream>
#include <cstring>

// �Ʒ� �ڵ�� �ƹ� ���� �����ϴ�.
class People
{
	char* name;
	int age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	// �����ڿ��� �ڿ��Ҵ� �ϴ� ��� 
	// �Ҹ��ڿ��� �ڿ����� �ϴ� ���� �Ϲ����� �ڵ��Դϴ�.
	~People() { delete[] name; }
};
int main()
{
	People p1("lee", 28);
}