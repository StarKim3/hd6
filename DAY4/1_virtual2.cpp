// 1_virtual2

class Shape
{
public:
	virtual void draw() {}
};

class Rect : public Shape
{
public:
	// 1. �����Լ� �����ǽ� virtual �� ������ �ʾƵ� �˴ϴ�. 
	//    �׷��� ���̴°��� �������� �����ϴ�.
	void draw() {}
};

int main()
{

}