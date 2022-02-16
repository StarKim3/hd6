
struct Point
{
	int x;
	int y;
};

int main()
{
	Point pt = { 1,2 };

	// 구조체의 모든 요소를 한줄로 꺼낼수 있습니다
	// C++17 에서 추가된 "structure binding" 이라는 문법 입니다 - 25page
	// "g++ 소스.cpp -std=c++17" 필요 합니다
	auto [a, b] = pt;	// auto a = pt.x
						// auto b = pt.y 의 의미 입니다.

	int[a1, b1] = pt; // error. auto만 가능합니다. !!


	int arr[3] = { 1,2,3 };

	auto [n1, n2, n3] = arr; // 배열도 됩니다.
	auto [n4, n5] = arr; // error. 갯수가 동일해야만 합니다.

	// 참고 : 파이썬
//	s = (1, 2)
//	a, b = s

	auto [a1, a2] = foo(); // a1, a2변수의 선언문입니다.
						// int a1 = foo함수반환값.x
}
Point foo() { Point pt; return pt; }