// 함수 템플릿 - 33page.. 아주 중요합니다. 반드시 이해 하셔야 합니다.

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 구현이 동일(유사)한 함수가 여러개 필요 하면
// 함수를 만들지 말고
// 함수를 만드는 틀(템플릿)을 만들면 편리합니다.

// 아래 코드는 "함수"가 아닙니다. 함수를 찍어내는 "틀" 입니다.
template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
	// 아래 2줄이 정확한 표기법입니다.
	square<int>(3);		// 1. square(int) 함수를 컴파일러가 생성
						// 2. 생성된 함수를 호출하는 기계어 코드 생성
						//    call square(int)
	square<double>(3.3); // square(double) 함수를 컴파일러가 생성
						 // 그리고 생성된 함수 호출 ( call square(double))

	// 함수 템플릿 사용시 타입인자 생략 가능합니다
	// 타입인자 생략시 "함수 인자를 가지고 타입을 추론"
	square(3);  // square<int>(3) 과 완벽히 동일합니다
	square(3.3);
}
