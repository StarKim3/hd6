#include <iostream>
#include <cstdlib>

// ���� �޸� �Ҵ�  52page
int main()
{
	// C ��� ��Ÿ��
	int* p1 = (int*)malloc(40); // sizeof(int)*10
	free(p1);

	// C++ ��� ��Ÿ��
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3; // ���� �迭 ���·� �Ҵ��ϸ� "delete[]" ó�� �ؾ� �մϴ�.
}
//				malloc			new
// ��ü			�Լ�				Ű����(������)
// ����			ũ��				Ÿ��
// ��ȯŸ��		void*			������ Ÿ���� �����ͷ� ��Ȯ�� ��ȯ
//			    ĳ���� �ʿ�		ĳ���� �ʿ� ����.
// ����			free			delete, delete[]
// ����������	������ȣ��ȵ�	������ȣ��