
// 4_함수1 - C 보다 발전된 C++ 함수 문법들.
// 1. 디폴트 파라미터 - 28 page

// 주의 사항 1. 함수를 선언과 구현으로 분리하는 경우,
//				=> 함수의 선언에만 표기해야 한다.
//          2. 마지막 인자 부터 차례대로만 지정할수 있다.

void f1(int a = 0, int b,     int c = 0) {}
void f2(int a    , int b = 0, int c    ) {}

void fn(int a, int b = 0, int c = 0);

int main()
{
	fn(1, 2, 3); // 1, 2, 3
	fn(1, 2);	 // 1, 2, 0
	fn(1);		 // 1, 0, 0
}

void fn(int a, int b /*= 0*/, int c /*= 0*/)
{
}
