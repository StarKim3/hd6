#include <cstdio>
#include <iostream>
// typename ��� class �� �ص� �˴ϴ�.
//template<typename T>
template<class T>
T square(T a)
{
	return a * a;
}
int main()
{
//	printf("%p\n", &square); // �ɱ�� ? �� ������ ������ ?
					// �ּҸ� ���Ѵٴ� �ǹ� : �޸𸮿� �ִٴ� ��
					// �׷���, Ʋ(template)�� ??
					// => ������ �ð��� �Լ��� ����(����)�� ����ϴ� Ʋ�̹Ƿ�
					//    �޸𸮿� �ִ°��� �ƴմϴ�.

	printf("%p\n", &square<int>); // ok �̷��� �ϸ� �˴ϴ�.

	std::cout << &square<int> << std::endl;
}

