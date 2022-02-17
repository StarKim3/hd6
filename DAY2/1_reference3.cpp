#include <iostream>

struct Rect
{
	int left, top, right, bottom;
};

//void draw(Rect r) // call by value : ���� ����(����)�� �������� �ʰڴٴ�
				  //				���. ���纻�� �����ǹǷ� ������尡 �ִ�.
//void draw(Rect& r) // call by reference : ���纻�� ������
				   //				�Ǽ��� ������ �����Ҽ��� �ִ�.

void draw(const Rect& r) // ���� ���� �ڵ� �Դϴ�. - 45 page
{
//	r.left = 100; // error. ���� �� �Լ� �ȿ����� r�� �����Ҽ� �����ϴ�.
}
int main()
{
	Rect rc = { 1,1,10,10 };

	draw(rc); // draw ������ ���� rc�� �������� �ʱ�� ����ϰ� �ʹ�.
}

// ���� : �������ڸ� �������� �������� �մϴ�. 
//       ������ ���� �ڵ�� ?
void f1(int n) {}		// 1 => ���� �ڵ�!!
void f1(const int& n) {}// 2

// ���۷����� ���� �޸𸮸� ������� �ʳ��� ?
// => C++ ǥ�� ���� : "���۷����� �ٸ� ������ ���� ��Ī(alias)�̴�.
//int n = 0;
//int& r = n;

// �Լ� ���ڸ� �޴� ���

// A. ���� ���ڸ� �����ϴ� ���
//    => �����͵� ����, ���۷����� �����ϴ�. - �Ʒ� �ڵ� ��� �����ϴ�.!!!
//    void inc1(int* p) {++(*p);}
//    void inc2(int& r) {++p;}    

// B. ���� ���ڸ� �������� �ʴ� ���
// 1. primitive type �̶��   : call by value�� �ϼ���  void fn(int n){}
// 2. user define type �̶�� : const reference�� �ϼ���  void fn(const Rect& r){}