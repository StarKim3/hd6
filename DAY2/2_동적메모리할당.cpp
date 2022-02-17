#include <iostream>
#include <cstdlib>

// 동적 메모리 할당  52page
int main()
{
	// C 언어 스타일
	int* p1 = (int*)malloc(40); // sizeof(int)*10
	free(p1);

	// C++ 언어 스타일
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3; // 주의 배열 형태로 할당하면 "delete[]" 처럼 해야 합니다.
}
//				malloc			new
// 정체			함수				키워드(연산자)
// 인자			크기				타입
// 반환타입		void*			전달한 타입의 포인터로 정확히 반환
//			    캐스팅 필요		캐스팅 필요 없음.
// 해지			free			delete, delete[]
// 결정적차이	생성자호출안됨	생성자호출