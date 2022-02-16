#include <stdio.h>

namespace Audio
{
	void init() { printf("init audio module\n"); }
}
namespace Video
{
	void init() { printf("init video module\n"); }
}

// global namesapce = Ư�� �̸������� ���Ե��� ���� ���
void init() { printf("init global module\n"); }

int main()
{
	// namespace �� ��ҿ� �����ϴ� ��� 3���� - 8page
	// 1. ������ �̸� ���(qualifed name)
	Audio::init();
	Video::init();

	// 2. using ����(declaration) ���
	using Audio::init;  // Audio::init �� Audio �̸� ���� ���� ����
	init();

	// 3. using ���þ�(directive) ���
	using namespace Audio; // Audio �� ��� ��Ҹ� Audio �̸� ���� ���� ����
	init();
}