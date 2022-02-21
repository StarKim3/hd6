// 2_shape1.cpp  - 152 page
#include <iostream>
#include <vector>

// 3. 모든 도형의 공통의 특징이 있다면 "반드시 기반 클래스에도 있어야 한다."
//    그래야, 기반 클래스 포인터로 모든 도형을 묶어서 관리할때
//    해당 기능을 사용할수 있다.

// 4. 기반 클래스 함수중 파생 클래스가 재정의 하게 되는 함수는 
//    반드시 가상함수로 설계 되어야 한다.

class Shape
{
protected:
	int color;
public:
	// 아래 함수는 virtual 로 할까요 ? 말까요 ?
	// 파생 클래스가 재정의 할일을 거의 없습니다. virtual 로 할 필요 없습니다.
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
	}
}


