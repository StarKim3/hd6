#include <stdio.h>

// 핵심 1. namespace 의 요소에 접근하는 방법 3가지 - 8page
//     2. 되도록이면 완전한 이름을 사용하자.

namespace Audio
{
	void init() { printf("init audio module\n"); }
}
namespace Video
{
	void init() { printf("init video module\n"); }
}

// global namesapce = 특정 이름공간에 포함되지 않은 경우
void init() { printf("init global module\n"); }

// using 선언은 함수안 또는 밖에 있을수 있습니다.
using Audio::init;

int main()
{
	// namespace 의 요소에 접근하는 방법 3가지 - 8page
	// 1. 완전한 이름 사용(qualifed name)
	Audio::init();
	Video::init();

	// 2. using 선언(declaration) 사용
//	using Audio::init;  // Audio::init 은 Audio 이름 없이 접근 가능
	init();
	::init();  //  ::  => "Scope Resolution" 이라는 연산자. global 접근해 달라.

	// 3. using 지시어(directive) 사용
	using namespace Audio; // Audio 의 모든 요소를 Audio 이름 없이 접근 가능
	init();
}