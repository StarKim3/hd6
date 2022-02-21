#include <iostream>
#include <cstring>

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
	~People() { delete[] name; }

	// ���� ����(deep copy)�� ������ ���� ������
	People(const People& p) : age(p.age)
	{
		// 1. �����Ͱ� �ƴ� ���� �״�� ���� �մϴ�.
//		age = p.age; // ���� �����ڵ� "�������� ����" �̹Ƿ� �ʱ�ȭ ����Ʈ���� �ϼ���

		// 2. �������� ���� �޸� �Ҵ���, �޸� ��ü�� �����մϴ�.
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
	}
};
int main()
{
	People p1("kim", 2);
	People p2 = p1; 
}