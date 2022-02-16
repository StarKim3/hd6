#include <algorithm> // 이 헤더 안에 C++ 표준 "min" 함수가 있습니다.
//using namespace std; // 이렇게 하고 싶을때가 있습니다.
					// 위험합니다. 실무에서는 이렇게 하지 마세요.

// 모든 C++ 표준은 "std" 라는 이름공간에 있습니다

int count = 0;

int main()
{
//	int n1 = min(10, 3); // error
	int n2 = std::min(10, 3); // ok

	int n3 = count; // 왜, 여기서 에러가 나올까요 ?
					// C++ 표준에 "std::count() 함수가 있습니다."
					// using namespace std 때문에
					// 전역변수 count 와 표준 함수 count 가 이름충돌발생
}