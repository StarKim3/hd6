// QA1-1.cpp
#include <iostream>

#define SQUARE(x) x * x
#define SQUARE2(x) ((x) * (x))

inline int square(int a)
{
	return a * a;
}
int main()
{
	int a = 3, b = 3;

//	int n1 = SQUARE(a+1); // a+1 * a+1 => 3 + 1 * 3 + 1 => 3 + 3 + 1 => 7
//	int n1 = SQUARE2(a+1); // ((a + 1)*(a+1)) => ((4)*(4)) => 16
	int n1 = SQUARE2(++a); // ((++a)*(++a)) => 25 입니다.
							//				==> 그런데, 컴파일러에 따라 다를수도 있습니다
							//				==> 그래서, 절대 사용하면 안되는 코드입니다.
							//					"undefined 라고 합니다."
	int n2 = square(b+1);

	// 아래 2줄 결과 예측해 보세요
	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl; // 16
}

// 결론 
// 매크로 SQUARE(3) => 3 * 3 으로 문자 치환후 => 3 * 3을 하는 기계어 코드 생성
// 인라인 square(3) ==========================> 3 * 3을 하는 기계어 코드 생성

// 결국, 매크로와 인라인은 모두 "3*3" 하는 기계어 코드가 생성된다는 것을 동일합니다.(최종결과 동일)
// 그런데, 매크로는 항상 위험 합니다. SQUARE(++a) 의 결과는 예측불가능하고, 항상 버그 입니다.
// 매크로를 아무리 잘만들어도 SQUARE(++a)의 해결책은 없습니다.