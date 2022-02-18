// PE1
#include <stdio.h>

int g1 = 0x11223344;
int g2 = 0x55667788;

int main()
{
	int n1 = 0;

	printf("hello");

	int* p1 = (int*)malloc(20);
	free(p1);
}