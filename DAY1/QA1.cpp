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