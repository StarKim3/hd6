// 6_���������3 - 102 page !!
#include <iostream>
#include <cstring>

// Ŭ���� ���ο� ������ ����� ���ٸ�
// => �����Ϸ��� �����ϴ� ���� �����ڸ� �׳� ����ϸ� �˴ϴ�.

// Ŭ���� ���ο� ������ ����� �ִٸ�
// => �����Ϸ��� �����ϴ� ���� ������ ���� 
//    "��������(shallow copy)"  ������ �ֽ��ϴ�.
// 
// => �����ڰ� ���� ���� �����ڸ� ���� �ذ��ؾ� �մϴ�

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
};
int main()
{
	People p1("kim", 2);
	People p2 = p1; // �� ������ �޸� �׸��� �� ������ ������(�׸� �׷� ������, 103 page)
					// ����ڰ� ���� �����ڸ� ������ �ʾ����Ƿ�
					// �����Ϸ��� �����ϴ� ���� ������ ���.
					// ==> ��� ����� ����.
}