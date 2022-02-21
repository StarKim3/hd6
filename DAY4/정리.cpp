// 1. C 보다 발전된 C++ 문법
//    => inline, overloading, template, reference, auto, new ....

// 2. 하나의 타입을 만들때 사용하는 문법 - class 문법
//    => 데이타와 함수를 묶자
//    => 접근지정자 : private, protected, public 
//    => 생성자, 소멸자 
//    => 멤버 초기화 리스트    : x(0), y(0) {}
//    => static member data
//	  => static member function    Car 객체의 갯수 파악 Car::cnt
//    => const member function     상수 객체는 상수 멤버 함수만 호출가능
//    => this
//    => reference 를 반환하는 이유     Counter& increment() 

// 3. 상속 문법과 객체지향 설계이야기
//	  => 상속 기본 모양
//	  => 상속 관계에서의 생성자 호출의 원리
//    => upcasting     Animal* p = new Dog   의 형태
//    => function override
//    => virtual function ( dynamic binding) 해달라는 지시어.
//    => "A와 B를 묶고 싶으면 기반 클래스를 설계 해라"
//    => Shape 예제 - OCP, 다형성, 디자인 패턴, prototype패턴(clone)
//    => 추상 클래스
//    => 인터페이스 개념, (강한 결합, 약한 결합)
//------------------------------------------
// 남아 있는것
// 4. 몇가진 빠진 문법, 연산자 재정의, 예외
// 5. STL 사용법
