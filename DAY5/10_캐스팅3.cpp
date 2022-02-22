#include <iostream>
#include <cstdlib>

// C ĳ������ �ʹ� ���� �մϴ�.
// ��κ� �����ϴµ�, ������ ĳ������ �������� �ǵ� ����, �Ǽ����� �������� �ʽ��ϴ�.

// �׷��� C++������ �뵵���� ĳ���ÿ����ڸ� �����մϴ�.

// static_cast      : �������� �ʰ�, �������� �ʿ��� �͸� ���
// reinterpret_cast : �ٸ� Ÿ���� �ּҸ� ĳ�����Ҷ� ���
int main()
{
	// void* => int* : �ݵ�� �ʿ��� �۾��̴�.
	int* p1 = (int*)malloc(20);				 // C ��Ÿ��   - ok
	int* p2 = static_cast<int*>( malloc(20) );// C++��Ÿ�� - ok

	// int* => double* : ���� �����ϴ�.!
	int n = 3;
	double* p3 = (double*)&n;	// ok
//	double* p4 = static_cast<double*>(&n); // error
	double* p4 = reinterpret_cast<double*>(&n); // ok.

	const int c = 10;
	int* p5 = (int*)&c;              // ok. ������ �ʹ� �����ϴ�.
	int* p6 = static_cast<int*>(&c); // error
	int* p7 = reinterpret_cast<int*>(&c); // error
	int* p8 = const_cast<int*>(&c); // ok. 

	// ��, C++�� �뵵���� �ٸ� ���·� ĳ�����ؼ�.
	// �ǵ��� ��Ȯ�� �ڵ忡 ǥ���Ѵ�.
}