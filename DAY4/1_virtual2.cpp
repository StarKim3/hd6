// 1_virtual2

class Shape
{
public:
	virtual void draw() {}
};
class Rect : public Shape
{
public:
	// 1. 가상함수 재정의시 virtual 을 붙이지 않아도 됩니다. 
	//    그런데 붙이는것이 가독성에 좋습니다.
//	virtual void draw() {}

	// 2. 가상함수 재정의시 오타 있어도 에러가 아닙니다.(새로운 함수로 취급 됩니다.)
	//   => 예전에 이문제가 많은 버그의 원인이 되었습니다.
//	virtual void Draw() {} 

	// 3. 그래서 C++11 부터는 가상함수 override 할때 "override" 를 붙이는 문법 탄생
	virtual void Draw() override {} // "Draw" 가 기반 클래스에 없으므로 error

	// 핵심 : 가상함수 재정의시 "override"를 붙여도 되고 안 붙여도 되지만, 
	//        C++11이 지원되는 환경이라면 "되도록(반드시) 붙이세요.."
};

int main()
{

}