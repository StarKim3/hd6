// 1_virtual2

class Shape
{
public:
	virtual void draw() {}
};

class Rect : public Shape
{
public:
	// 1. 가상함수 재정의시 virtual 을 붙이지 않아도 됩니다. 
	//    그런데 붙이는것이 가독성에 좋습니다.
	void draw() {}
};

int main()
{

}