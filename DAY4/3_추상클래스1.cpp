// 3_추상클래스1 - 168page

// 추상클래스(abstract class) : 순수가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 생성 할수 없다.
// 의도 : 특정 함수를 반드시 만들어야 한다고, 지시하는 문법.
class Shape
{
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function )
							 // 구현부가 없고, "= 0" 으로 끝나는 모양
	virtual ~Shape() {}
};

class Rect : public Shape
{
	// draw 구현부가 없으면 Rect 도 추상 클래스 입니다.
	// Rect 를 사용할수 있게 하도록 하려면 반드시 "draw()" 구현을 제공해야 합니다.
};

int main()
{
	Shape  s; // error. 추상클래스는 객체를 만들수 없다.
	Shape* p; // ok. 
	Rect   r;
}