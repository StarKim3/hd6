// 2_shape1.cpp  - 152 page
#include <iostream>
#include <vector>

// 2. ��� ������ ������ ��� Ŭ������ �ִٸ�
//    ��� ������ ��� ���� �Ҽ� �ִ�.

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
//			Rect rc; // �̷��� �ϸ� {} �� ����� �ٷ� �ı� �˴ϴ�.
			Rect* p = new Rect; // �̷��� �ϸ� delete �ϱ��������� ��� ��밡��.
								// ������ �ּҸ� ��� p ��ü�� {} ����� �ı��˴ϴ�.
			
			v.push_back(p);     // �׷��� p�� �ı��Ǳ� ���� Rect �ּҸ� vector������
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle); // �� �ڵ�� �̷��� ���ٷ� �ϸ� �˴ϴ�.
		}
		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw();
		}
	}
}
// �� �ڵ�� �� �����ϱ�� ?
// �ذ�å�� ����� ?


