// auto, decltype - 21 page
int main()
{
	int x[5] = { 1,2,3,4,5 };

	// auto : 우변의 표현식을 가지고 좌변의 타입을 결정해 달라.
	//		  컴파일러가 컴파일 시간에 결정, 실행시 오버헤드는 없음.
	//		  C++11 에서 추가.
	auto n1 = x[0];

	// decltype : () 안의 표현식으로 타입을 결정해 달라.
	decltype(n1) d; // n1은 int 타입이므로 "int d" 


	const int c = 10;

	auto a1 = c; // a1의 타입은 ? 답은 2번 !!
				 // 1. const int     2. int 

	decltype(c) d2; // d2의 타입은 ? 1번. 그런데, 초기값이 없어서 error
					// 1. const int    2. int

	int y[3] = { 1,2,3 };

	auto a2 = y; // 1. int a2[3] = y; 일것이다. 라고 만들었다면
				 //					 배열은 복사 될수 없으므로 error
				 // 2. int* a2 = y;  그래서, 이렇게 결정합니다.

	// 결론, auto 가 타입을 결정하는 원리는 생각보다 복잡합니다.
	// ==> C++중급이후 과정 참고..
}