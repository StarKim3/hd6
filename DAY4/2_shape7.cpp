#include <iostream>
#include <vector>

class Shape
{
protected:
	int color;
public:
	// 1. 모든 기반 클래스를 소멸자를 가상함수로 해야 한다.
	virtual ~Shape() {} 

	void setColor(int c) { color = c; }

	// 가상함수 : 파생 클래스가 만들지 않으면 기반 클래스가 디폴트 구현을 제공한다는 의도
	// 순수가상함수 : 파생클래스가 반드시 만들어야 한다고 지시하는 것
	//				=> 디폴트 구현은 없다는 의미.

	virtual void draw() const = 0;
	virtual Shape* clone() const = 0;

	// 단, 순수 가상함수가 많아지면, 파생 클래스 제작자 입장에서 지켜야 하는 규칙이
	// 많아지게 됩니다.
};


class Rect : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw rect" << std::endl; }

	virtual Shape* clone() const override
	{
		Rect* p = new Rect;
		p->color = color;  
		return p;
	}
};

class Circle : public Shape
{
public:

	virtual void draw() const override { std::cout << "draw circle" << std::endl; }

	virtual Shape* clone() const override
	{
		Circle* p = new Circle;
		p->color = color;
		return p;
	}
};
// 상수객체는 상수 함수만 호출가능하다.
// 상수 객체도, "draw()" 할수 있어야하고, 복사본 만들수 있어야 하므로!
// const Rect r;
// r.draw(); // !!

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
				p->draw();
		}
		else if (cmd == 8)
		{
			std::cout << "몇번째 도형을 복제 할까요 >> ";

			int k;
			std::cin >> k;

			v.push_back(v[k]->clone()); 
		}
	}
}


