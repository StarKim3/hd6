// 정리.

// C++에서 알아야 하는 것

// 1. C에는 없지만 C++에서 추가된 몇가지 문법(함수, 변수, 제어문)
//    => auto, template, reference, new, nullptr
//    => overloading, inline, default parameter, 함수 삭제, 후위 반환
//    => range-for

// 2. 타입을 하나 만들때 필요한 문법들 ( class 문법 )
// 
//    => 데이타와 함수를 묶어서 타입으로 만들자
//    => 접근지정자(private vs public)
//	  => 생성자, 소멸자
//    => 멤버 초기화 리스트로 멤버를 초기화 하자.
//    => static member data
//    => static member function
//    => const member function => 상수 객체는 상수 멤버 함수만 호출가능하다
//    => this 
//    => 참조를 반환하는 이유( Counter& increment() { return *this; } )

//    => "복사 생성자" - 5일차에.. 
//===================================
// 3. 상속과 객체지향 디자인
// 4. 연산자 재정의, 예외
// 5. C++ 표준라이브러리(STL) 사용법