// 10_접근지정자 - 134 page
// C++ 의 접근지정자는 3개 입니다. : private, protected, public 
class Base
{
private:   int a; // 자신의 멤버 함수만 접근 가능
protected: int b; // 자신의 멤버 함수 와 파생 클래스의 멤버함수에서 접근 가능
public:    int c; // 어디서도 접근 가능.
};
class Derived : public Base
{
public:
	void fn() 
	{
		a = 10; // error. 파생 클래스라도, 기반 클래스의 private 에 접근 안됨
				// 접근하려면 기반 클래스가 제공하는 함수 사용 setA(10)
		b = 10; // ok
		c = 10; // ok. 
	}
};
int main()
{
	Base base;
	base.a = 10; // error. private 멤버
	base.b = 10; // error. protected 멤버
	base.c = 10; // ok.    public 
}