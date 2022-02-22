// 4_����Ʈ������1 - 201
#include <iostream>

class Car
{
	int color;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

// �Ʒ� Ŭ������ �ٽ��Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = nullptr) : obj(p) {}

	~Ptr() { delete obj; } 

	Car* operator->() { return obj; }
};
int main()
{
//	Car* p = new Car;
	// �Ʒ� �ڵ忡�� p�� ��ü�� �� ������ ������.
	// p �� "Ptr Ÿ�԰�ü" �ε� ��ġ "Car*" ó�� ���˴ϴ�
	Ptr p = new Car; // Ptr p(new Car) �� �����ϼ���.

	p->Go(); // ( p.operator->() ) Go() �� ����ε�
			 // ( p.operator->() )->Go() ó�� �ؼ��˴ϴ�.
}
// �ᱹ Ptr p �� ��ü ����
// Car* p �� ��Ȱ�� �ϰ� �ֽ��ϴ�.

// ���� : Ptr p�� ��ü�̹Ƿ� �ı��ɶ� �Ҹ��ڰ� ȣ��ǰ�
//		 �޸𸮸� �ڵ������ϴ� ����� ������ �˴ϴ�.
// �̷� Ŭ����(Ÿ��)�� "smart pointer" ��� �մϴ�.
// ���� C++���� �θ� ���˴ϴ�.