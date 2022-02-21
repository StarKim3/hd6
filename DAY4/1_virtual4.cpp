// 1_virtual3
// 가상 소멸자 이야기. - 149 page
#include <iostream>


class Shape
{
	// protected 소멸자 :  외부에서는 직접 호출할수 없다.
	//					단, 파생 클래스 에서는 호출할수 있다.
	// 의도 : Shape* 타입으로는 delete 하지 말라!
protected:
	~Shape() { std::cout << "~Shape" << std::endl; }
};

class Rect : public Shape
{
public:
	Rect()  { std::cout << "Rect()" << std::endl; }
	~Rect() { std::cout << "~Rect()" << std::endl; } // { ... ; ~Shape(); } 인데
									// 파생클래스에서는 기반 클래스 protected 접근 가능
};

int main()
{
	Shape* p = new Rect; 
//	delete p;	// 이제 Shape* 인 상태로는 delete 될수 없습니다
	delete (Rect*)p; // ok.. 또는 delete static_cast<Rect*>(p);
					// 장점 : 가상함수를 사용하지 않으므로 성능저하가 없다.
					// 단점 : p가 Rect 인지 아닌지 모를때도 있다.(Shape예제)
					//			그런경우는 사용하지 마세요.(가상소멸자 사용하세요)
}