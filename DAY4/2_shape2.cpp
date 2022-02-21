// 2_shape1.cpp  - 152 page
#include <iostream>
#include <vector>

// 2. 모든 도형의 공통의 기반 클래스가 있다면
//    모든 도형을 묶어서 관리 할수 있다.

class Shape
{
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle" << std::endl; }
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
//			Rect rc; // 이렇게 하면 {} 을 벗어날때 바로 파괴 됩니다.
			Rect* p = new Rect; // 이렇게 하면 delete 하기전까지는 계속 사용가능.
								// 하지만 주소를 담는 p 자체는 {} 벗어나면 파괴됩니다.
			
			v.push_back(p);     // 그래서 p가 파괴되기 전에 Rect 주소를 vector에보관
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle); // 위 코드는 이렇게 한줄로 하면 됩니다.
		}
		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw();
		}
	}
}
// 위 코드는 왜 에러일까요 ?
// 해결책은 뭘까요 ?


