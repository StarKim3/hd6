#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// 모든 메뉴의 공통의 기반 클래스를 설계 합니다.

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
		std::cout << getTitle() << " 메뉴가 선택됨" << std::endl;
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";

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
	MenuItem m1("소고기 김밥", 11);
	MenuItem m2("참치 김밥", 12);

	PopupMenu kimbam("김밥류");
	kimbam.addMenu(&m1);
	kimbam.addMenu(&m2);

	MenuItem ramen("라면", 21);
	MenuItem noodle("국수", 22);

	PopupMenu pm("오늘의 메뉴");
	pm.addMenu(&kimbam); // ????
	pm.addMenu(&ramen);  // ok
	pm.addMenu(&noodle); // ok

	pm.command();
}