// 6_this1 - 126 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	void set(int a, int b) // void set(Point* this, int x, int y)
	{
		x = a; 
		y = b; 
		// 멤버 함수 안에서 this 라는 키워드를 사용할수 있습니다.
		// this : 현재 멤버함수를 호출한 객체의 주소
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20);
	p2.set(10, 20);	

	std::cout << "&p1 : " << &p1 << std::endl;
	std::cout << "&p2 : " << &p2 << std::endl;

}
