// 4_�������̽�1 - 171
#include <iostream>


// ���� ����(loosely coupling)

// �ϳ��� Ŭ������ �ٸ� Ŭ���� ����
// Ŭ���� �̸��� ���� ������� �ʰ�,
// ��Ģ�� ���� �߻�Ŭ����(�������̽�)�� ����ؼ� ���.

// ��ü ������, ������ ������

// ��� ����
// �������̽� : ���Ѿ� �ϴ� ��Ģ�� ���� ��
// �߻�Ŭ���� : ���Ѿ� �ϴ� ��Ģ + �ٸ� ����� �ִ� ���. => Shape ����, Shape Ŭ����

// �ٸ� ��� : "interface" ��� Ű���尡 �ֽ��ϴ�.
// C++      : "interface" Ű����� ����, �߻� Ŭ���� �������� �������̽� ����
//------------------------------------------------------------


// ī�޶� ���� ������ ����, 
// ī�޶�� ����� ���̿� ���Ѿ� �ϴ� ��Ģ�� ���� ���� ����.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�. => �̷��� ǥ������ ����
//        ��� ī�޶�� �Ʒ� �������̽��� ���� �ؾ� �Ѵ�. => ��� ǥ���� �����ϴ�.

class ICamera
{
public:
	virtual void take() = 0;
	virtual ~ICamera() {}    // �������̽��� �ᱹ ��� Ŭ���� �̹Ƿ�
							 // �Ҹ��ڴ� �����Լ��� �Ǿ�� �մϴ�.
};




// ���� ī�޶� ��� ī�޶� ����ϴ� �ڵ带 ����� �ֽ��ϴ�.
// ��Ģ��θ� ����ϸ� �˴ϴ�.
class People
{
public:
	void useCamera(ICamera* p) { p->take();}
};

class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};


int main()
{
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc);

	UHDCamera uhc;
	p.useCamera(&uhc); // ok..  
}