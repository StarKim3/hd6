// 1_namespace1.cpp- 7page
#include <stdio.h>
// 1. ���α׷��� ���õ� ��ҳ��� �и��ؼ� �����Ҽ� �ִ�.
// 2. �̸� �浹���� ������ �ִ�.
namespace Audio
{
	void init()
	{
		printf("init audio module\n");
	}
}
namespace Video
{
	// Video ���� �Լ�, ����ü, ������������ ��� �̾ȿ� �����.
	void init()
	{
		printf("init video module\n");
	}
}
int main()
{
	Audio::init();
	Video::init();
}