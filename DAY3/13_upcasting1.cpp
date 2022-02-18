// 13_upcasting1 - 140 page
class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog dog;
	Dog*    p1 = &dog; // ok
//	int*    p2 = &dog; // error
	Animal* p3 = &dog; // ok..

	// 핵심 1. 기반 클래스 포인터로 파생 클래스 주소를 담을수 있다.(가리킬수 있다.)

	// 핵심 2. 기반 클래스 포인터로는 기반 클래스 멤버만 접근가능하다
	p3->cry();		 // ok.
//	p3->setColor(3); // error.

	// 핵심 3. Dog의 고유 멤버에 접근하려면
	//			캐스팅한다.
	((Dog*)p3)->setColor(3); // ok

	static_cast<Dog*>(p3)->setColor(3); // 좋은 코드 - 월요일에
}
