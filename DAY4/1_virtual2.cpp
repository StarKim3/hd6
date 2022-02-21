// 1_virtual2

class Shape
{
public:
	virtual void draw() {}
};
class Rect : public Shape
{
public:
	// 1. �����Լ� �����ǽ� virtual �� ������ �ʾƵ� �˴ϴ�. 
	//    �׷��� ���̴°��� �������� �����ϴ�.
//	virtual void draw() {}

	// 2. �����Լ� �����ǽ� ��Ÿ �־ ������ �ƴմϴ�.(���ο� �Լ��� ��� �˴ϴ�.)
	//   => ������ �̹����� ���� ������ ������ �Ǿ����ϴ�.
//	virtual void Draw() {} 

	// 3. �׷��� C++11 ���ʹ� �����Լ� override �Ҷ� "override" �� ���̴� ���� ź��
	virtual void Draw() override {} // "Draw" �� ��� Ŭ������ �����Ƿ� error

	// �ٽ� : �����Լ� �����ǽ� "override"�� �ٿ��� �ǰ� �� �ٿ��� ������, 
	//        C++11�� �����Ǵ� ȯ���̶�� "�ǵ���(�ݵ��) ���̼���.."
};

int main()
{

}