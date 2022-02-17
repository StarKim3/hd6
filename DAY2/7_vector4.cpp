#include <iostream>

int main()
{
	int num;
	int count = 0;	// �Էµ� ����
	int size = 5;	// �迭 ũ��
	int* score = new int[size]; 

	while (1)
	{
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;

		if (count == size)
		{
			int* temp = new int[size + 5];

			memcpy(temp, score, sizeof(int) * size);

			delete[] score; // ����! score �� ����°� �ƴ϶�.!
							// score �� ����Ű�� ��(�ּ�)�� �޸𸮸� ����

			score = temp; // ���Ӱ� �Ҵ��� �޸� �ּҸ� score ������ �־� �ش�.

			size = size + 5;
		}
	}

	std::cout << "�Է��� ���� : " << count << std::endl;
	std::cout << "���� �Ҵ�� ����(�迭)ũ�� : " << size << std::endl;

	// "���� �Ҵ�� �迭"�� range-for�� ����Ҽ� �����ϴ�. 
	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << ", ";
	}

	// ���̻� �ʿ������ �� ���켼��
	delete[] score; // score�� ����°� �ƴ϶�
					// score ������ ��� �ּ��� �޸𸮸� ����� ��

}





