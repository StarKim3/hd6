// 1_virtual3
// ���� �Ҹ��� �̾߱�. - 149 page
#include <iostream>


class Shape
{
	// protected �Ҹ��� :  �ܺο����� ���� ȣ���Ҽ� ����.
	//					��, �Ļ� Ŭ���� ������ ȣ���Ҽ� �ִ�.
	// �ǵ� : Shape* Ÿ�����δ� delete ���� ����!
protected:
	~Shape() { std::cout << "~Shape" << std::endl; }
};

class Rect : public Shape
{
public:
	Rect()  { std::cout << "Rect()" << std::endl; }
	~Rect() { std::cout << "~Rect()" << std::endl; } // { ... ; ~Shape(); } �ε�
									// �Ļ�Ŭ���������� ��� Ŭ���� protected ���� ����
};

int main()
{
	Shape* p = new Rect; 
//	delete p;	// ���� Shape* �� ���·δ� delete �ɼ� �����ϴ�
	delete (Rect*)p; // ok.. �Ǵ� delete static_cast<Rect*>(p);
					// ���� : �����Լ��� ������� �����Ƿ� �������ϰ� ����.
					// ���� : p�� Rect ���� �ƴ��� �𸦶��� �ִ�.(Shape����)
					//			�׷����� ������� ������.(����Ҹ��� ����ϼ���)
}