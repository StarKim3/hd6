// 6_제어문 - 39 page

int fn()
{
	return 10;
}

int main()
{
	// 아래 코드는 아주 널리 사용되는 코드입니다.
	int ret = fn();
	if (ret == 10)
	{
	}

	// C++17 부터 아래 처럼 사용가능합니다.
	if (int ret2 = fn(); ret2 == 10) // 새로운 if 문 - if with initializer 라는 문법
	{
	} // <== 이순간 ret2 파괴 됩니다.

	// switch 도 초기화 구문 가질수 있게 되었습니다. - C++17
	switch (int ret3 = fn(); ret3)
	{
	case 1: break;
	case 2: break;
	}

	// 아래 처럼 while 도 될까요 ? ??? 
	while (int cnt = 0; cnt < 10)
	{

		++cnt;
	}

}