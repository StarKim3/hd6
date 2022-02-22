// 4_스마트포인터1 - 201
#include <iostream>

class Car
{
	int color;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

// 아래 클래스가 핵심입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = nullptr) : obj(p) {}

	~Ptr() { delete obj; } 

	Car* operator->() { return obj; }
};
int main()
{
//	Car* p = new Car;
	// 아래 코드에서 p의 정체를 잘 생각해 보세요.
	// p 는 "Ptr 타입객체" 인데 마치 "Car*" 처럼 사용됩니다
	Ptr p = new Car; // Ptr p(new Car) 로 생각하세요.

	p->Go(); // ( p.operator->() ) Go() 의 모양인데
			 // ( p.operator->() )->Go() 처럼 해석됩니다.
}
// 결국 Ptr p 는 객체 지만
// Car* p 의 역활을 하고 있습니다.

// 장점 : Ptr p는 객체이므로 파괴될때 소멸자가 호출되고
//		 메모리를 자동삭제하는 기능을 가지게 됩니다.
// 이런 클래스(타입)을 "smart pointer" 라고 합니다.
// 실전 C++에서 널리 사용됩니다.