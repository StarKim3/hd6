#include <iostream>
#include <vector>

// 5. OCP
//    기능 확장에는 열려있고(Open, 클래스가 나중에 추가되어도)
//    코드 수정에는 닫혀있어야(Close, 기존 코드가 변경되지 않도록)
//    만들어야 한다는 원칙(Principle)

// Open Close Principle( 개방 폐쇄의 법칙)

// 다형성(가상함수 기반 코드)은 OCP를 만족하는 아주 좋은 코드 입니다


class Shape
{
protected:
	int color;
public:
	void setColor(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl; }
};
class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	virtual void draw() { std::cout << "draw triangle" << std::endl; }
};


int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			v.push_back(new Rect);
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw();  // 다형성(polymorphism)
							// 동일한 표현식이 상황(p가 가리키는 객체)에 따라
							// 다르게 동작하는 것.

			// 객체지향언어의 3가지 특징 : 캡슐화, 상속, 다형성
		}
	}
}


