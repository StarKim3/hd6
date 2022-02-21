#include <iostream>
#include <vector>

// 6. if ~ else, switch~case 등의 제어문은 
//    "새로운 요소 추가시 코드가 수정되는 경우가 많습니다."
//    항상, 가상함수로 할수 없을까를 생각 해 보세요

// 리팩토링 용어중 "Replace conditional with polymorphism" 이라는 용어가 있습니다.

// 리팩토링 : 기존에 만든 코드를 "보다 좋은 구조"로 변경하는 작업

// 7. 디자인 패턴 : 1994년에 발간된 책 ( 4명의 저자 )  "gof design pattern"
//													"gangs of four"
//		기존에 존재하는 코딩 스타일에 이름을 부여한 서적
//      23개의 이름. 

// prototype pattern : 객체 생성후, 복사본을 만드는 가상함수로 새로운 객체를 만드는 기술
//						clone 가상함수


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

		// 생각해 볼문제 1. 객체의 생성 과정을 OCP를 만족하게 할수 없을까 ?
		//				 => "추상 팩토리" 패턴을 사용하면 됩니다.

		// 2. Undo/Redo 기능을 넣으려면 어떻게 코드를 만들어야 할까요 ?
		// => "Command" 패턴을 사용하면 됩니다.

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


