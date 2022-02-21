// 5_메뉴1
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

// C 언어로 메뉴를 만들어 봅시다.

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