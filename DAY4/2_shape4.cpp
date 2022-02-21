#include <iostream>
#include <vector>

// 5. OCP
//    ��� Ȯ�忡�� �����ְ�(Open, Ŭ������ ���߿� �߰��Ǿ)
//    �ڵ� �������� �����־��(Close, ���� �ڵ尡 ������� �ʵ���)
//    ������ �Ѵٴ� ��Ģ(Principle)

// Open Close Principle( ���� ����� ��Ģ)

// ������(�����Լ� ��� �ڵ�)�� OCP�� �����ϴ� ���� ���� �ڵ� �Դϴ�

// ��ü���� ����� ��Ű�� ���ٴ� 5�� ��Ģ : SOLID ( SRP, OCP, LSP, ISP, DIP )

class Shape
{
protected:
	int color;
public:
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

class Triangle : public Shape
{
public:
	virtual void draw() { std::cout << "draw triangle" << std::endl; }
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
				p->draw();  // ������(polymorphism)
							// ������ ǥ������ ��Ȳ(p�� ����Ű�� ��ü)�� ����
							// �ٸ��� �����ϴ� ��.

			// ��ü�������� 3���� Ư¡ : ĸ��ȭ, ���, ������
		}
		else if (cmd == 8)
		{
			std::cout << "���° ������ ���� �ұ�� >> ";
			
			int k;
			std::cin >> k;

			// k��° ������ �������� ���� v�� �߰��մϴ�
			// �׷���, k��° ������ ����� ? ��� �ؾ� �ұ�� ?
		}
	}
}


