// 1_virtual3
// 가상 소멸자 이야기. - 149 page
#include <iostream>

class Shape
{
public:
	~Shape() {}
};

class Rect : public Shape
{
public:
	Rect()  { std::cout << "Rect()" << std::endl; }
	~Rect() { std::cout << "~Rect()" << std::endl; }
};
int main()
{
	Rect rc;  // 이 코드 실행결과 확인해 보세요.
}