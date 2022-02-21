// 3_추상클래스1 - 168page

class Shape
{
public:
	virtual void draw() = 0;
	virtual ~Shape() {}
};

class Rect : public Shape
{
};

int main()
{
	Shape  s;
	Shape* p;
	Rect   r;
}