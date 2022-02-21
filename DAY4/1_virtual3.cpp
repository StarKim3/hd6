// 1_virtual3
// 가상 소멸자 이야기. - 149 page
#include <iostream>

// 핵심 : 기반 클래스로 사용되는 모든 클래스는 
//		  반드시 "소멸자를 가상함수로" 해야 한다.
//        ==> "흔히 가상소멸자" 라는 용어를 사용합니다.
// 
//      단, 고급 기법에서 의도적으로 가상 소멸자를 사용하지 
//		않는 경우도 있긴 합니다.

class Shape
{
public:
	virtual ~Shape() {}
};
class Rect : public Shape
{
public:
	Rect()  { std::cout << "Rect()" << std::endl; }

	// 기반 클래스 소멸자가 가상함수라면
	// 모든 파생 클래스 소멸자도 자동으로 가상함수 입니다.
	// 그런데, 가독성을 위해서는 붙이는 것이 좋습니다.
	virtual ~Rect() { std::cout << "~Rect()" << std::endl; }
};
int main()
{
//	Rect rc;  // 이 코드 실행결과 확인해 보세요. - 예상대로 Rect 생성자/소멸자 호출됩니다.

	// 아래 코드 결과 확인해 보세요.
	Shape* p = new Rect; // 1. 메모리 할당
						 // 2. 생성자 호출 - Rect() 호출

	delete p;	// 1. 소멸자 호출 - 소멸자도 함수 이므로 함수 바인딩 정책에 따라 결정
				//		소멸자가 가상함수가 아니면 - static binding 하므로
				//								   ~Base() 만호출.
				//		~Rect()를 호출되게 하려면 dynamic binding 해야 한다.
				// 2. p가 가리키는 메모리 해제
}