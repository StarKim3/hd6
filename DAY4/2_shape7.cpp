#include <iostream>
#include <vector>

class Shape
{
protected:
	int color;
public:
	// 1. ��� ��� Ŭ������ �Ҹ��ڸ� �����Լ��� �ؾ� �Ѵ�.
	virtual ~Shape() {} 

	void setColor(int c) { color = c; }

	// �����Լ� : �Ļ� Ŭ������ ������ ������ ��� Ŭ������ ����Ʈ ������ �����Ѵٴ� �ǵ�
	// ���������Լ� : �Ļ�Ŭ������ �ݵ�� ������ �Ѵٰ� �����ϴ� ��
	//				=> ����Ʈ ������ ���ٴ� �ǹ�.

	virtual void draw() const = 0;
	virtual Shape* clone() const = 0;

	// ��, ���� �����Լ��� ��������, �Ļ� Ŭ���� ������ ���忡�� ���Ѿ� �ϴ� ��Ģ��
	// �������� �˴ϴ�.
};


class Rect : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw rect" << std::endl; }

	virtual Shape* clone() const override
	{
		Rect* p = new Rect;
		p->color = color;  
		return p;
	}
};

class Circle : public Shape
{
public:

	virtual void draw() const override { std::cout << "draw circle" << std::endl; }

	virtual Shape* clone() const override
	{
		Circle* p = new Circle;
		p->color = color;
		return p;
	}
};
// �����ü�� ��� �Լ��� ȣ�Ⱑ���ϴ�.
// ��� ��ü��, "draw()" �Ҽ� �־���ϰ�, ���纻 ����� �־�� �ϹǷ�!
// const Rect r;
// r.draw(); // !!

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

			v.push_back(v[k]->clone()); 
		}
	}
}


