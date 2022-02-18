#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

// 아래 함수 잘 생각해 보세요
Point& fn()
{
	Point pt = { 1,2 }; // 핵심은 pt 가 지역변수라는 점입니다.

	return pt;		// 절대 지역변수를 참조 반환 하면 안됩니다.
					// 컴파일 에러는 없지만 잘못된 코드 입니다.
					// (요즘은 경고는 발생합니다.)
}

Point fn2()
{
	Point pt = { 1,2 }; 
	return pt;	// ok.. 지역변수는 반드시 "값" 반환 해야 합니다.
				// 함수 호출이 종료되면 pt는 파괴 됩니다.
				// 그런데, 반환값이 필요하지 않을까요 ? 그래서 임시객체를 반환하게됩니다
} 

int main()
{
	fn2();
}
// 결론 : 함수 호출이 종료 되어도, 파괴되지 않는 경우만 참조 반환 사용해야 합니다.

//    1. return 전역객체;
//    2. 멤버 함수에서 return *this;
