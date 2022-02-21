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
			for (auto p : v) // p 는 Shape* 입니다.
				p->draw();   // Shape 에는 draw 가 없습니다.
							 // 지난주 배운내용
							 // => 기반 클래스포인터 파생클래스 객체를 가리킬수 있다.
							 // => 하지만 고유 멤버에 접근할수없다.
							 // 해결책 1. p를 Rect나 Circle 로 캐스팅 한다. 
							 //			=> 그런데, Rect 인지 Circle 인지 알수 없다.
							 //       2. Shape 에 draw를 추가한다.
		}
	}
}
// 위 코드는 왜 에러일까요 ?
// 해결책은 뭘까요 ?


