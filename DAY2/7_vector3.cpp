#include <iostream>

int main()
{
	// 4. ����ڰ� -1 �� �Է��Ҷ� ���� ��� �Է� �ް� �ʹ�.
	//    �׷���, �Էµ� ���� �ݵ�� �����ϰ� �־�� �Ѵ�.
	// ===> �Ʒ� �ڵ�� �߸��� �ڵ��Դϴ�.
	int num;

	int score[5];
	int count = 0;

	while (1)
	{
		std::cin >> num;

		if (num == -1)
			break;

		score[count] = num;
		++count;
	}

}





