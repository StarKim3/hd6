#include <iostream>

int main()
{
	// 4. 사용자가 -1 을 입력할때 까지 계속 입력 받고 싶다.
	//    그런데, 입력된 값은 반드시 보관하고 있어야 한다.
	// ===> 아래 코드는 잘못된 코드입니다.
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





