// 1_namespace1.cpp- 7page
#include <stdio.h>
// 1. 프로그램을 관련된 요소끼리 분리해서 관리할수 있다.
// 2. 이름 충돌등을 막을수 있다.
namespace Audio
{
	void init()
	{
		printf("init audio module\n");
	}
}
namespace Video
{
	// Video 관련 함수, 구조체, 전역변수등을 모두 이안에 만든다.
	void init()
	{
		printf("init video module\n");
	}
}
int main()
{
	Audio::init();
	Video::init();
}