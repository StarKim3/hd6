#include <iostream>
#include <vector>


class Shape
{
protected:
	int color;
public:
	int type;
	void setColor(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape
{
public:
	Rect() { type = 1; }
	virtual void draw() { std::cout << "draw rect" << std::endl; }
};
class Circle : public Shape
{
public:
	Circle() { type = 2; }
	virtual void draw() { std::cout << "draw circle" << std::endl; }
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

			// 아래 처럼 k 번째 도형이 어떤 도형인지 조사해서
			// switch~case 로 만드는 코드는 어떨까요 ?
			// ==> 새로운 도형이 추가되면 코드가 수정되어야 합니다.
			// ==> OCP 원칙을 만족할수 없는 좋지 않은 코드 입니다.
			switch (v[k]->type)
			{
			case 1: v.push_back(new Rect); break;
			case 2: v.push_back(new Circle); break;
			}
		}
	}
}


