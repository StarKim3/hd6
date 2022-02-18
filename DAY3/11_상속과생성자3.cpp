#include <iostream>

class Base
{
	int value;
public:
//	Base() { }
	Base(int a) { }
	~Base() { }
};
class Derived : public Base
{
public:
	// 사용자가 만든 코드	// 컴파일러가 변경한 코드
//	Derived() { }		// Derived()      : Base() { }
//	Derived(int a) { }	// Derived(int a) : Base() { }
	~Derived() { }		// ~Derived()     { ....; ~Base(); }

	// 기반 클래스에 디폴트 생성자가 없으면 위 코드 15, 16 번 줄은 에러 입니다.
	// 컴파일러가 변경한 코드를 잘 생각해 보세요..

	// 해결책은 사용자가 "기반 클래스의 다른 생성자를 호출하는 코드를 제공해야 합니다."
	// 아래 코드 참고
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};
int main()
{

}