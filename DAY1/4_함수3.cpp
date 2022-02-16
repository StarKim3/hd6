// 4_함수3.cpp.  함수 오버로딩 - 30 page

// C언어 : 동일한 이름의 함수는 2개 만들수 없다.
// C++   : 인자의 갯수나 인자의 타입이 다르면 (호출시 구별할수 있으면)
//		   동일한 이름의 함수를 여러개 만들수 있다 - "함수 overloading"
// => 함수는 여러개 있지만, 사용자는 "한개의 함수" 처럼 생각하게 됩니다.
// => 일관된, 사용하기 쉬운 라이브러리 구축을 할수 있다.
// 대부분의 언어가 지원
// 지원 안되는 언어 : C 언어, Python 
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	// 3은 int, 3.3 은 double 이라고 이미 "C/C++" 표준에서 정의해 놓았습니다.
	square(3);
	square(3.3);

	int n = 0; // 모든 변수는 "항상 타입"이 있습니다.
	square(n);
}
// 주의 사항 : 함수 호출시 구별할수 있는 경우만 됩니다.
void f1(int a) {}
char f1(int a) {}  
f1(0); // 

void f2(int a) {}
void f2(int a, int b = 0) {}
f2(0);