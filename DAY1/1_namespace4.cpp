
//#include <stdio.h> // printf 가 전역에만 있습니다.

#include <cstdio> // printf 가 전역에도 있고 std 안에도 있습니다

//  기존 C 헤더			C++에서 새로 만든헤더
// <xxx.h>		==>		<cxxx>
// <stdio.h>    ==>     <cstdio>
// <stdlib.h>   ==>     <cstdlib>
// <string.h>   ==>     <cstring>
// <math.h>     ==>     <cmath>

int main()
{
	// printf 는 C 표준 함수 이지만..
	printf("hello\n"); // ok

	// C++ 표준이기도 합니다.
	std::printf("hello\n"); // 될까요 ?
}