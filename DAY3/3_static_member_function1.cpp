// static_member_function1.cpp

#include <iostream>

class Car
{
	int color;
	static int cnt;	
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	// �ڵ��� ������ ��ȯ�ϴ� ��� �Լ�
//	int getCount() { return cnt; } // �ݵ�� ��ü�� �־�߸� ȣ�Ⱑ���� �Լ�

	static int getCount() { return cnt; } // ��ü ���� ȣ�Ⱑ���� �Լ�
										 // "Ŭ�����̸�::�Լ��̸�" ���� ȣ��
};
int Car::cnt = 0; // private  �� �־ �ܺ� ����� �ʱ�ȭ�� �����մϴ�.

int main()
{
	// static ��� �Լ��� ��ü���� ȣ�Ⱑ���մϴ�.
	std::cout << Car::getCount() << std::endl;

	Car c1;
	Car c2;

	std::cout << c1.getCount() << std::endl; // 2
//	std::cout << Car::cnt << std::endl;
}
