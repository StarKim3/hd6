#include <iostream>

int g = 10;

class Test
{
	// 결론 : 필드 초기화시
	//		  리터럴(0 같은) 값 초기화만 사용하세요
	//		  "++g" 같은 표기법은 절대 사용하지 마세요.. 혼란스러워 집니다.

	int value1 = 0;		// 여기 있는 초기값을 컴파일시에
	int value2 = ++g;	// 생성자에 초기화 리스트로 옮겨 놓는것!
public:
	// 사용자 코드				// 컴파일러가 변경한 것
	Test() {}					// Test()      : value1(0), value2(++g) {}
	Test(int n) : value2(n) {}  // Test(int n) : value1(0), value2(n) {}
};
int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 실행하지 말고 예측해 보세요.. 얼마 나올까요?
								 // 11
}