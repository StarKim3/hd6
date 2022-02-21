// 2_shape1.cpp  - 152 page
#include <iostream>
#include <vector>

// 3. ��� ������ ������ Ư¡�� �ִٸ� "�ݵ�� ��� Ŭ�������� �־�� �Ѵ�."
//    �׷���, ��� Ŭ���� �����ͷ� ��� ������ ��� �����Ҷ�
//    �ش� ����� ����Ҽ� �ִ�.

// 4. ��� Ŭ���� �Լ��� �Ļ� Ŭ������ ������ �ϰ� �Ǵ� �Լ��� 
//    �ݵ�� �����Լ��� ���� �Ǿ�� �Ѵ�.

class Shape
{
protected:
	int color;
public:
	// �Ʒ� �Լ��� virtual �� �ұ�� ? ����� ?
	// �Ļ� Ŭ������ ������ ������ ���� �����ϴ�. virtual �� �� �ʿ� �����ϴ�.
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


