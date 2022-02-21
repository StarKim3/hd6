// 2_shape1.cpp  - 152 page
#include <iostream>
#include <vector>

// 3. ��� ������ ������ Ư¡�� �ִٸ� "�ݵ�� ��� Ŭ�������� �־�� �Ѵ�."
//    �׷���, ��� Ŭ���� �����ͷ� ��� ������ ��� �����Ҷ�
//    �ش� ����� ����Ҽ� �ִ�.

class Shape
{
public:
	void draw() { std::cout << "draw shape" << std::endl; }
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


