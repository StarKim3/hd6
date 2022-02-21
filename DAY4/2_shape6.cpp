#include <iostream>
#include <vector>

// 6. if ~ else, switch~case ���� ����� 
//    "���ο� ��� �߰��� �ڵ尡 �����Ǵ� ��찡 �����ϴ�."
//    �׻�, �����Լ��� �Ҽ� ����� ���� �� ������

// �����丵 ����� "Replace conditional with polymorphism" �̶�� �� �ֽ��ϴ�.

// �����丵 : ������ ���� �ڵ带 "���� ���� ����"�� �����ϴ� �۾�

// 7. ������ ���� : 1994�⿡ �߰��� å ( 4���� ���� )  "gof design pattern"
//													"gangs of four"
//		������ �����ϴ� �ڵ� ��Ÿ�Ͽ� �̸��� �ο��� ����
//      23���� �̸�. 

// prototype pattern : ��ü ������, ���纻�� ����� �����Լ��� ���ο� ��ü�� ����� ���
//						clone �����Լ�


class Shape
{
protected:
	int color;
public:
	void setColor(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }

	// �ڽ��� ���纻�� ����� �����Լ��� ���� �θ� Ȱ��˴ϴ�.
	virtual Shape* clone()
	{
		Shape* p = new Shape; // �ڽŰ� ������ Ÿ���� ��ü�� �����
		p->color = color;     // �ڽŰ� �����ϰ� ��� ����� ���� �մϴ�.
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
		p->color = color;  // color �� �ƴ϶� Rect ���� ����� �����ؾ� �մϴ�		
		return p;
	}
};
// Shape* p1 = new Rect;
// Shape* p2 = p1->clone(); // p1�� ������ ������ ��ü ����



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

		// ������ ������ 1. ��ü�� ���� ������ OCP�� �����ϰ� �Ҽ� ������ ?
		//				 => "�߻� ���丮" ������ ����ϸ� �˴ϴ�.

		// 2. Undo/Redo ����� �������� ��� �ڵ带 ������ �ұ�� ?
		// => "Command" ������ ����ϸ� �˴ϴ�.

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

			// k ��° ������ � �������� ���ʿ� ����.
			// �׳�, ���纻�� ������ �޶�� �ϸ� �ȴ�
			v.push_back( v[k]->clone() ); // ������!! OCP�� �����մϴ�.
										// ���ο� ������ �߰��Ǿ �� �ڵ��
										// ������ �ʿ� �����ϴ�.
		}
	}
}

