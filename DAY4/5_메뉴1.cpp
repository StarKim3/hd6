// 5_메뉴1
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// C 언어로 메뉴를 만들어 봅시다.
// C 언어 : 프로그램이란 main 함수의 1번째 줄부터 순차적으로 실행되는 실행흐름이다.
//          실행흐름을 변경하려면 반복문이나 조건문을 사용하면 된다.
// "structrural programming"
int main()
{
	printf("1. 김밥\n");
	printf("2. 라면\n");
	printf("3. 국수\n");

	printf("메뉴를 선택하세요 >> ");
	int cmd;
	scanf_s("%d", &cmd);

	switch (cmd)
	{
	case 1: break;
	case 2: break;
	case 3: break;
	}
}