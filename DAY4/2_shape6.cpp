#include <iostream>
#include <vector>


class Shape
{
protected:
	int color;
public:
	void setColor(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }

	// 자신의 복사본을 만드는 가상함수는 아주 널리 활용됩니다.
	virtual Shape* clone()
	{
		Shape* p = new Shape; // 자신과 동일한 타입의 객체를 만들고
		p->color = color;     // 자신과 동일하게 모든 멤버를 복사 합니다.
		return p;
	}
};



class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl; }

	virtual Shape* clone()
	{
		Rect* p = new Rect;
		p->color = color;  // color 뿐 아니라 Rect 고유 멤버도 복사해야 합니다		
		return p;
	}
};
// Shape* p1 = new Rect;
// Shape* p2 = p1->clone(); // p1과 동일한 복제본 객체 생성



class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl; }

	virtual Shape* clone()
	{
		Circle* p = new Circle;
		p->color = color;  
		return p;
	}
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
				p->draw();  
		}
		else if (cmd == 8)
		{
			std::cout << "몇번째 도형을 복제 할까요 >> ";

			int k;
			std::cin >> k;

			// k 번째 도형이 어떤 도형인지 알필요 없다.
			// 그냥, 복사본을 생성해 달라고 하면 된다
			v.push_back( v[k]->clone() ); // 다형성!! OCP를 만족합니다.
										// 새로운 도형이 추가되어도 이 코드는
										// 수정될 필요 없습니다.
		}
	}
}


