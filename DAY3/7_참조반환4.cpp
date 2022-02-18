#include <iostream>

class Point
{
public:
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 };

Point fn()
{
	return pt;
}

int main()
{
	Point ret = fn();  // 복사가 몇번 일어날까요 ?
	
	// 위 코드에 대해서
	// 1. 결국 복사가 2번. 소멸자가 3번 호출되는 코드입니다.
	// 
	// 2. 그런데 대부분 컴파일러가 최적화 해서 임시객체를 제거 합니다
	//    g++ 의 -fno-elide-constructors 옵션을 지정하면 최적화를 막을수 있습니다.

	// 3. 그런데, C++17 부터 "임시객체를 제거하는 최적화 기법이" 문법화 되었습니다.
	//    그래서 "반환값을 받으면" 임시객체를 제거 됩니다.
}

