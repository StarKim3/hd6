// 3_�߻�Ŭ����1 - 168page

// �߻�Ŭ����(abstract class) : ���������Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� ���� �Ҽ� ����.
// �ǵ� : Ư�� �Լ��� �ݵ�� ������ �Ѵٰ�, �����ϴ� ����.
class Shape
{
public:
	virtual void draw() = 0; // ���� �����Լ�(pure virtual function )
							 // �����ΰ� ����, "= 0" ���� ������ ���
	virtual ~Shape() {}
};

class Rect : public Shape
{
	// draw �����ΰ� ������ Rect �� �߻� Ŭ���� �Դϴ�.
	// Rect �� ����Ҽ� �ְ� �ϵ��� �Ϸ��� �ݵ�� "draw()" ������ �����ؾ� �մϴ�.
};

int main()
{
	Shape  s; // error. �߻�Ŭ������ ��ü�� ����� ����.
	Shape* p; // ok. 
	Rect   r;
}