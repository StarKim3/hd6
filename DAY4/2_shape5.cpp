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
			std::cout << "���° ������ ���� �ұ�� >> ";

			int k;
			std::cin >> k;

			// �Ʒ� ó�� k ��° ������ � �������� �����ؼ�
			// switch~case �� ����� �ڵ�� ���� ?
			// ==> ���ο� ������ �߰��Ǹ� �ڵ尡 �����Ǿ�� �մϴ�.
			// ==> OCP ��Ģ�� �����Ҽ� ���� ���� ���� �ڵ� �Դϴ�.
			switch (v[k]->type)
			{
			case 1: v.push_back(new Rect); break;
			case 2: v.push_back(new Circle); break;
			}
		}
	}
}


