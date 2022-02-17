// 5_접근지정자 - 74page
#include <iostream>
#include <string>

// 핵심 : 타입을 만드는데, 사용하기 쉽고, 안전하게 사용하도록 만들자.
// "제대로 사용하기 쉽게, 잘못사용하기 어렵게 만들어라"

// 접근 지정자 : public vs private

// 외부의 잘못된 사용으로 부터 객체가 불안한 상태가 되는 것을 막는다.

// 캡슐화(encapsulation), 정보 은닉(information hiding) 이라고 합니다.



struct Person
{
private:				// private 영역 : 멤버 함수에서만 접근 가능
	std::string name;	//				멤버가 아닌 함수에서 접근시 에러
	int  age;

public:					// public 영역 : 모든 곳에서 접근 가능한 멤버
	void setAge(int value)
	{
		if ( value > 0 && value < 150 )
			age = value;
	}
};
int main()
{
	Person p;
//	p.age = -10; // 잘못된 사용으로 객체의 상태라 불안해 졌다.
				 // private 에 있다면 컴파일 에러
	p.setAge(-10);
}