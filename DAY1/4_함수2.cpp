// 4_함수2 - 인라인 함수 - 32 page

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }


int main()
{
	int n1 = add1(1, 2); // 인자를 약속된 장소에 넣고
						 // 함수로 이동(call add1)

	int n2 = add2(1, 2); // add2 함수의 기계어 코드를 
						// 이 위치에 넣어 달라.(치환해달라)
						// 장점 : 속도가 빠르다.
						// 단점 : 여러번 사용하면 기계어가 여러번 치환 되므로
						//			실행파일 크기가 커질수 있다.
						
}

