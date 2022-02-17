#include <iostream>

int main()
{
	int num;
	int count = 0;	// 입력된 갯수
	int size = 5;	// 배열 크기
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

			delete[] score; // 주의! score 를 지우는게 아니라.!
							// score 가 가리키는 곳(주소)의 메모리를 제거

			score = temp; // 새롭게 할당한 메모리 주소를 score 변수에 넣어 준다.

			size = size + 5;
		}
	}

	std::cout << "입력한 갯수 : " << count << std::endl;
	std::cout << "현재 할당된 버퍼(배열)크기 : " << size << std::endl;

	// "동적 할당된 배열"은 range-for는 사용할수 없습니다. 
	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << ", ";
	}

	// 더이상 필요없으면 꼭 지우세요
	delete[] score; // score를 지우는게 아니라
					// score 변수에 담긴 주소의 메모리를 지우는 것

}





