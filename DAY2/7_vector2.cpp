#include <iostream>

int main()
{
	// 3. 사용자가 입력한 학생 수 만큼 다시 점수를 입력 받고 싶다.
	
	int count;
	std::cout << "학생수는 >> ";
	std::cin >> count;

	// 입력한 학생수(count) 만큼의 메모리가 필요 하다.
//	int score[count]; // error.  배열의 크기로 변수 사용 안됨.

	// 사용자가 원할때 원하는 크기 만큼 자유롭게 메모리할당할수 있는 공간
	// => 자유기억공간(힙)
	// => 할당된 메모리에 대한 이름이 없다.
	// => 그래서, 주소를 포인터 변수에 보관했다가 접근 시 사용
	int* score = new int[count]; // 변수 사용가능.

	// 포인터 변수는 배열 처럼 사용가능하므로 score 를 배열인것 처럼 사용하면 된다.
	std::cin >> score[0];

	// 주의. 사용후에 더이상 필요 없을때 꼭 지워야 한다.
	delete[] score;
}



