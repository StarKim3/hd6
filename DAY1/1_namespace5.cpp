
// 함수를 선언과 구현으로 분리시에도 각각 namespace 안에 넣어야 합니다.
// MyMath.h
namespace MyMath
{
	int add(int a, int b);
}
//--------------------
#include "MyMath.h"

int main()
{
	int n = MyMath::add(1, 2);
}
//--------------------
// MyMath.cpp
namespace MyMath
{
	int add(int a, int b)
	{
		return a + b;
	}
}