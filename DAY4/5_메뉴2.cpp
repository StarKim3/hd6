// 5_�޴�1
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// ��ü���� : ���α׷��� ��ü�� �����ϰ�, ��ü���� ���踦 �����ϰ�
//			 ��ü���� �޼����� �ְ� �޴°��̴�.(����Լ��� ȣ���Ѵٴ� �ǹ�)

// �ʿ��� Ÿ���� ���� ��������.
// 

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	// �޴� ���ý� ȣ��Ǵ� �Լ�
	void command()
	{
		std::cout << getTitle() << " �޴��� ���õ�" << std::endl;
		_getch(); // Ű���� ������ ���� ��� ���ߴ� �Լ�
	}
};

int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("����", 13);

	m1.command(); // �޴� ���ý�. command() �Լ����� ó���ϱ�� ���!
}