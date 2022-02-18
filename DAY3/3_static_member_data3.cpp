#include <iostream>

// 방법 3. static 멤버 데이타 사용
// 1. 객체를 생성하지 않아도 static 멤버 데이타는 메모리에 놓인다 
//   => 클래스 외부 선언이 있기 때문에 (결국 전역변수와 유사)

// 2. 객체를 생성시, non-static 멤버만 객체 메모리에 포함됩니다.
//    static 멤버는 객체 메모리에는 포함되지 않습니다.
//	  아래 코드에서 sizeof(Car) 는 "4" 입니다.

// 3. "Car::cnt" 로 접근 가능합니다(public 에 있다면)

class Car
{
	int color;
public:
//	int cnt = 0;		// 객체당 한개씩 생성
	static int cnt;		// static 멤버 데이타(정적 멤버 데이타)
						// 반드시 클래스외부에 선언 필요

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 반드시 클래스 외부 선언이 필요 합니다.
int Car::cnt = 0;

int main()
{
	// 객체가 없어도 static 멤버 데이타는 메모리에 있습니다.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static 멤버에 접근하는 2가지 방법
	// 1. 객체이름.static멤버
	// 2. 클래스이름::static멤버
	std::cout << c1.cnt << std::endl; 
	std::cout << Car::cnt << std::endl; //=> 권장!!
										// c1.cnt 로 하면 cnt 가 static 인지 아닌지
										// 코드만 보고 알수 없습니다.
}