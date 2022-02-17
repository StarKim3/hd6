int main()
{
	int n = 10;

	// 원래 레퍼런스는 변수만 가리키고, 값(literal)을 가리킬수 없습니다.
	// "lvalue reference" 라고 합니다.
	int& r1 = n; // ok
	int& r2 = 10; // error

	// C++11 부터 10 과 같은 리터럴도 가리키는 레퍼런스(참조) 가 나왔습니다.
	// "rvalue reference" 라고 합니다.
	int&& r3 = 10;// ok
	int&& r4 = n; // error

}
// 46page