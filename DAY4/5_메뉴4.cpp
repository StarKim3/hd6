#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// ��� �޴��� ������ ��� Ŭ������ ���� �մϴ�.

class BaseMenu
{	
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}
	virtual ~BaseMenu() {}

	std::string getTitle() const { return title; }
};

class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n) : BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << getTitle() << " �޴��� ���õ�" << std::endl;
		_getch();
	}
};
//-----------------------
class PopupMenu : public BaseMenu
{
	std::string title;
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void addMenu(BaseMenu* p) { v.push_back(p); }

	void command()
	{
		while (1)
		{
			system("cls"); 
			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴��� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) 
				break;

			if (cmd < 1 || cmd > sz + 1) 
				continue;

			v[cmd - 1]->command();
		}
	}
};

int main()
{
	MenuItem m1("�Ұ�� ���", 11);
	MenuItem m2("��ġ ���", 12);

	PopupMenu kimbam("����");
	kimbam.addMenu(&m1);
	kimbam.addMenu(&m2);

	MenuItem ramen("���", 21);
	MenuItem noodle("����", 22);

	PopupMenu pm("������ �޴�");
	pm.addMenu(&kimbam); // ????
	pm.addMenu(&ramen);  // ok
	pm.addMenu(&noodle); // ok

	pm.command();
}