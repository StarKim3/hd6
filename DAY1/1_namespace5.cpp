
// �Լ��� ����� �������� �и��ÿ��� ���� namespace �ȿ� �־�� �մϴ�.
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