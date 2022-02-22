// 언어 마다 lvalue vs rvalue 정의가 다릅니다.
int main()
{
	int n = 3;

	n = 10; // ok.    n은 =의 왼쪽에 올수 있습니다. - lvalue
	3 = 10; // error. 3은 =의 왼쪽에 올수 없습니다. - rvalue

			// 그런데 C++에서는 좀더 많은 의미가 있습니다.
			// lvalue : 등호의 왼쪽에 오고, 이름이 있고(메모리존재), 주소를 구할수 있다.

	const int c = 10;
	c = 10; // error. c는 lvalue ? rvalue
			// lvalue 입니다. 수정 불가능한 lvalue 

	// 왜 중요합니까 ??
	// C++11 부터 lvalue 과 rvalue 에 따라 다른 알고리즘을 사용하면
	// 성능향상을 볼수 있는 경우가 있다는 것을 알게 되었습니다.

	int n = 0;
	fn(n); // 1
	fn(3); // 2
}
void fn(int& a) {}  // lvalue 전용 함수 - 1
void fn(int&& a) {} // rvalue 전용 함수 - 2

// 디폴트 파라미터 주의사항 꼭 기억하라..
// 복사 생성자 3문제 나옵니다. 수업 1시간 분량이니 꼭 다시 보세요.
// 예외 키워드 3개 기억하세요 : throw, try, catch

// 포인터 0 대신 사용하는 키워드 : nullptr

// C++ 입출력 객체 이름 : 

// auto, template, inline 

// static 멤버 함수 는 static 멤버만 접근 가능하다. - 이 부분 수업예제 꼭 보세요
// 생성자는 여러개가능, 소멸자여러개 안됨.							

