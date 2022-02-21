// 4_인터페이스1 - 171
#include <iostream>


// 약한 결합(loosely coupling)

// 하나의 클래스가 다른 클래스 사용시
// 클래스 이름을 직접 사용하지 않고,
// 규칙을 담은 추상클래스(인터페이스)를 사용해서 통신.

// 교체 가능한, 유연한 디자인

// 용어 정리
// 인터페이스 : 지켜야 하는 규칙만 담은 것
// 추상클래스 : 지켜야 하는 규칙 + 다른 멤버가 있는 경우. => Shape 예제, Shape 클래스

// 다른 언어 : "interface" 라는 키워드가 있습니다.
// C++      : "interface" 키워드는 없고, 추상 클래스 문법으로 인터페이스 설계
//------------------------------------------------------------


// 카메라를 먼저 만들지 말고, 
// 카메라와 사용자 사이에 지켜야 하는 규칙을 먼저 설계 하자.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다. => 이렇게 표현하지 말고
//        모든 카메라는 아래 인터페이스를 구현 해야 한다. => 라는 표현이 좋습니다.

class ICamera
{
public:
	virtual void take() = 0;
	virtual ~ICamera() {}    // 인터페이스도 결국 기반 클래스 이므로
							 // 소멸자는 가상함수가 되어야 합니다.
};




// 실제 카메라가 없어도 카메라를 사용하는 코드를 만들수 있습니다.
// 규칙대로만 사용하면 됩니다.
class People
{
public:
	void useCamera(ICamera* p) { p->take();}
};

class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};


int main()
{
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc);

	UHDCamera uhc;
	p.useCamera(&uhc); // ok..  
}