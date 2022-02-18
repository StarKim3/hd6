#include <vector>

class Animal
{
public:
	int age;
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};

class Cat : public Animal
{
};

// upcasting 활용 1. 동종을 처리하는 함수 만들기!
//void NewYear(Dog* p) // Dog 객체만 받을수 있는 함수
void NewYear(Animal* p) // 모든 동물을 처리하는 함수(동종, 동일 기반 클래스 사용하는 타입)
{
	++(p->age);  // age를 public 으로 옮기세요.
}

int main()
{
	Dog dog; NewYear(&dog);
	Cat cat; NewYear(&cat);

	// 활용 2. 동종을 저장하는 컨테이너(여러개를 보관하는 타입) 만들기.
	std::vector<Dog*> v1;	 // Dog 객체만 보관
	std::vector<Animal*> v2; // 모든 동물 객체를 보관
}

// 핵심 
// A 와 B를 하나의 컨테이너에 묶어서 관리하고 싶다
// => A와 B의 공통의 기반 클래스를 만들어라!

// 상속은 "기존 타입의 확장"이라는 의미도 있지만
// 타입들을 하나로 "묶기 위한 도구" 이기도 하다.