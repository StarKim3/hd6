// 3_nullptr4
#include <iostream>

int main()
{
	int* p = 0;
	*p = 10; // 컴파일 ok.. 실행하면 runtime error
			 // 0은 우리가 할당한 메모리가 아닙니다.
			 // 할당한 메모리만 역참조 됩니다.

	// 0은 포인터를 초기화 할때만 사용가능하지, 0 자체가 포인터인것은 아닙니다.
	int n = 0;
	*n = 10; // error. 정수를 역참조 할수 없습니다.
	*0 = 10; // error. 0도 정수 입니다. 역참조 할수 없습니다.

	// nullptr : 0과 마찬가지로 포인터를 초기화 할때 사용가능 하고,
	//			nullptr 자체가 주소는 아닙니다
	*nullptr = 10; // error
}