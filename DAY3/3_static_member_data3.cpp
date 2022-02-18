#include <iostream>

// ��� 3. static ��� ����Ÿ ���
// 1. ��ü�� �������� �ʾƵ� static ��� ����Ÿ�� �޸𸮿� ���δ� 
//   => Ŭ���� �ܺ� ������ �ֱ� ������ (�ᱹ ���������� ����)

// 2. ��ü�� ������, non-static ����� ��ü �޸𸮿� ���Ե˴ϴ�.
//    static ����� ��ü �޸𸮿��� ���Ե��� �ʽ��ϴ�.
//	  �Ʒ� �ڵ忡�� sizeof(Car) �� "4" �Դϴ�.

// 3. "Car::cnt" �� ���� �����մϴ�(public �� �ִٸ�)

class Car
{
	int color;
public:
//	int cnt = 0;		// ��ü�� �Ѱ��� ����
	static int cnt;		// static ��� ����Ÿ(���� ��� ����Ÿ)
						// �ݵ�� Ŭ�����ܺο� ���� �ʿ�

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static ��� ����Ÿ�� �ݵ�� Ŭ���� �ܺ� ������ �ʿ� �մϴ�.
int Car::cnt = 0;

int main()
{
	// ��ü�� ��� static ��� ����Ÿ�� �޸𸮿� �ֽ��ϴ�.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static ����� �����ϴ� 2���� ���
	// 1. ��ü�̸�.static���
	// 2. Ŭ�����̸�::static���
	std::cout << c1.cnt << std::endl; 
	std::cout << Car::cnt << std::endl; //=> ����!!
										// c1.cnt �� �ϸ� cnt �� static ���� �ƴ���
										// �ڵ常 ���� �˼� �����ϴ�.
}