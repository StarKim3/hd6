// 5_�ݺ��� - 38page
#include <iostream>
#include <string>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �������� for ��
	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}
	// C++11���� ���� ���Ե� for �� - "range for" ��� �մϴ�.
	// ���̽� : for e in x 
	// C#     : foreach( int e in x)
	// C++    : for    ( int e : x)
	for ( auto e : x)   // �迭�� �ƴ϶� STL(C++ǥ�ض��̺귯��) �� vector, list � ����
	{
		std::cout << e << std::endl;
	}
	// �����Ҵ�� �迭�� �ȵ˴ϴ� - ũ�� ������ �����ϴ�.
	int* p = (int*)malloc(sizeof(int) * 10);
	
	for (auto e : p)  // error. 
	{
	}
	free(p);
}