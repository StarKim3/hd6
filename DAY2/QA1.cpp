#include <iostream>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	for (int e : x)
	{
	}
	// �� �ڵ带 ������ �ϸ� �Ʒ� ó�� ����˴ϴ�.
	// �ᱹ x �ڸ��� ���� ��(�迭, vector) �� std::begin()�̶�� �Լ��� ���ڷ�
	// ���޵ɼ� ������ �˴ϴ�.
	/*
	auto p1 = std::begin(x); // ó���� ����Ű�� �ݺ���(������)��� ���� ������ �۾�
	auto p2 = std::end(x);

	for (; p1 != p2; ++p1)
	{
		int e = *p1;
		//--------------------
	}
	*/
}
