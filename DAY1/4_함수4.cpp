// 함수 템플릿 - 33page.. 아주 중요합니다. 반드시 이해 하셔야 합니다.

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 구현이 동일(유사)한 함수가 여러개 필요 하면
// 함수를 만들지 말고
// 함수를 만드는 틀(템플릿)을 만들면 편리합니다.

// 아래 코드는 "함수"가 아닙니다. 함수를 찍어내는 "틀" 입니다.
template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);
	square<double>(3.3);
}
