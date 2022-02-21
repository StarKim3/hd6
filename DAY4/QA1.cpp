// QA1
#include <vector>
class Shape
{
	int color;
};
class Point : public  Shape
{
	int x, y;
};

int main()
{
	Point pt;

	// 아래 2줄의 차이점을 알아 두세요.
	Shape* p = &pt; // p 는 pt 객체를 가리키는 포인터
	Shape  s = pt;  // 새로운 객체 s 를 생성하면서 pt로 초기화
					// 그런데, pt 가 가진 color 만 초기화시 사용..
					// object slicing 이라고 합니다.
}
void f1(Shape* p) // 모든 도형을 인자로 받을수 있습니다.
{
}
void f2(Shape s)  // 모든 도형을 받을수 있지만,, 각 도형의 color 만 복사한
{				  // Shape 객체 생성, 이렇게 사용되는 경우는 거의 없습니다.
}
std::vector<Shape*> v1; // 모든 도형을 보관하겠다는 의미 입니다.
std::vector<Shape>  v2; // Shape 만 보관하겠다는 의미 입니다.
						// Point를 넣어도, Point가 저장되는것은 아닙니다