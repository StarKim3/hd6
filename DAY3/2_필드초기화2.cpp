#include <iostream>

int g = 10;

class Test
{
	// ��� : �ʵ� �ʱ�ȭ��
	//		  ���ͷ�(0 ����) �� �ʱ�ȭ�� ����ϼ���
	//		  "++g" ���� ǥ����� ���� ������� ������.. ȥ�������� ���ϴ�.

	int value1 = 0;		// ���� �ִ� �ʱⰪ�� �����Ͻÿ�
	int value2 = ++g;	// �����ڿ� �ʱ�ȭ ����Ʈ�� �Ű� ���°�!
public:
	// ����� �ڵ�				// �����Ϸ��� ������ ��
	Test() {}					// Test()      : value1(0), value2(++g) {}
	Test(int n) : value2(n) {}  // Test(int n) : value1(0), value2(n) {}
};
int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // �������� ���� ������ ������.. �� ���ñ��?
								 // 11
}