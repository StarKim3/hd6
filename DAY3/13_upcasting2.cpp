#include <vector>

class Animal
{
public:
	int age;
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};

class Cat : public Animal
{
};

// upcasting Ȱ�� 1. ������ ó���ϴ� �Լ� �����!
//void NewYear(Dog* p) // Dog ��ü�� ������ �ִ� �Լ�
void NewYear(Animal* p) // ��� ������ ó���ϴ� �Լ�(����, ���� ��� Ŭ���� ����ϴ� Ÿ��)
{
	++(p->age);  // age�� public ���� �ű⼼��.
}

int main()
{
	Dog dog; NewYear(&dog);
	Cat cat; NewYear(&cat);

	// Ȱ�� 2. ������ �����ϴ� �����̳�(�������� �����ϴ� Ÿ��) �����.
	std::vector<Dog*> v1;	 // Dog ��ü�� ����
	std::vector<Animal*> v2; // ��� ���� ��ü�� ����
}

// �ٽ� 
// A �� B�� �ϳ��� �����̳ʿ� ��� �����ϰ� �ʹ�
// => A�� B�� ������ ��� Ŭ������ ������!

// ����� "���� Ÿ���� Ȯ��"�̶�� �ǹ̵� ������
// Ÿ�Ե��� �ϳ��� "���� ���� ����" �̱⵵ �ϴ�.