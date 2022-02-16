// QA1
#define SQUARE(x) x * x

inline int square(int a)
{
	return a * a;
}
int main()
{
	int n1 = SQUARE(3);
	int n2 = square(3);
}

// 매크로 : 전처리기에 의한 문자 치환
// 인라인 : 컴파일러에 의한 기계어 코드 치환

// 컴파일 하면
// 1. 전처리기가 # 으로 시작되는 문장 처리
// 2. 전처리가 완료된 코드를 컴파일러가 기계어(CPU 가 이해하는 명령들(숫자))로 변경

// visual studio 설치시 설치되는 C/C++ 컴파일러는 "cl.exe" 입니다.

// cl qa1.cpp   하면 qa1.exe 생성됩니다. = > 실행파일 만든것

// cl qa1.cpp / EP   하면 "전처리만 해달라" 입니다.
// #이 제거된후의 코드를 볼수 있습니다.
// => 화면으로 출력됩니다.