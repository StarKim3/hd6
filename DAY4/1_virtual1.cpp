// 1_virtual1 - 144page
#include <iostream>

class Animal
{
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1
	
	// 가상함수 : 컴파일러에게 어느 함수를 호출할지 결정하는 것을
	//           컴파일 시간이 아니라 실행시간(dynamic binding)에 해달라는 것.
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 파생 크래스 에서 기반 클래스 멤버함수를 다시 만드는것
	// overloading 과 헷갈리지 마세요.
	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2
	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }  // 2
};

int main()
{
	Animal a; a.cry1(); // 1
	Dog    d; d.cry1(); // 2

	Animal* p = &d;

//	if (사용자입력 == 1) p = &a; // 사용자 입력(실행시간에 따라)
								// p가 가리키는 객체가 변경!

	// 컴파일러는 p가 어떤 객체를 가리키는지 알수 없습니다.
	p->cry1();	// 1 ? 2 중 어느 함수를 호출할까요 ? - Animal 
				// 어느함수를 호출하는것이 논리적으로 맞을까요 ? - dog
	p->cry2();
}

// 161 page 내용
// p->cry1() 을 어느 함수로 연결할것인가 ? 
// => 함수 바인딩(function binding) 문제

// 1. static binding : 컴파일러가 컴파일 시간에 어느 함수를 호출할지 결정
//                     컴파일러는 p가 어떤 객체를 가리키는지 알수 없다.
//					   따라서, p의 타입(Animal*) 만으로 함수의 호출 결정
//						Animal cry1 호출됨.
// 빠르지만, 논리적이지 않다.
// C++ 기본 정책, C#


// 2. dynamic binding : 컴파일 할때 p 가 가리키는 곳(메모리)를 조사하는 기계어 코드생성
//					실행시 해당 메모리에 어떤 객체가 있었는지를 조사후 호출
//					dog 객체가 있었다면 dog cry1 호출
// 느리지만, 논리적이다. 
// java, swift, python, objective-c
// C++ 과 C#의 virtual function(가상함수)