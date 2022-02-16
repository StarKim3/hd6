// 4_함수5 - 함수 삭제 - 35 page

// gcd(int, int) 가 있는데, gcd(2.3, 4.1)로 사용했습니다
// gcd(double, double) 함수가

// 1. 없다면 : gcd(int, int) 호출됩니다.
// 2. 선언부만 제공하면 : 링크 에러 발생(함수를 찾을수 없다.)
//						핵심 - 컴파일단계에서는 에러는 아니라는 점


// 두 정수의 최대 공약수를 구하는 함수를 생각해 봅시다.
int gcd(int a, int b)
{
	return 0; // 구현 생략, 교재(35p) 참고하세요
}

//double gcd(double a, double b); // 핵심 : 선언만 하세요

double gcd(double a, double b) = delete; // C++11 부터 나온 "함수 삭제" 문법
						// 의미 : 진짜로 무엇인가를 제거하는 것은 아니라!!
						//       gcd(double)버전 사용하는 코드 있으면 에러 
						//		 나오게 해달라는 의미.

int main()
{
	gcd(10, 4);
	gcd(2.3, 4.1); // 이순간 컴파일러가 만든 코드는
					// call "gcd(double)버전 링커가 찾아서 여기에주소 적어달라"
					// 라고 컴파일 됩니다.
}