#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	void command()
	{
		std::cout << getTitle() << " 메뉴가 선택됨" << std::endl;
		_getch(); 
	}
};
//-----------------------
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// 팝업메뉴 선택시 해야 하는 일을 생각해 보세요.
	void command()
	{
		system("cls"); // 화면 지우기
		int sz = v.size();

		for (int i = 0; i < sz; i++)
		{
			std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
		}
		std::cout << sz + 1 << ". 종료" << std::endl;

		std::cout << "메뉴를 선택하세요 >> ";
		
		int cmd;
		std::cin >> cmd;

		// 선택한 메뉴를 실행합니다.
		v[cmd - 1]->command();
	}
};





int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	MenuItem m3("국수", 13);	
	PopupMenu pm("오늘의 메뉴");
	pm.addMenu(&m1);
	pm.addMenu(&m2);
	pm.addMenu(&m3);
	pm.command(); // 팝업 메뉴를 누르는 경우 해야 할일을 생각해 보세요.
}