// 4_함수6 - 후위 반환 타입 - 37 page

// 전통적인 함수 모양
int square1(int a)
{
	return a * a;
}

// C++11 에서 새로 나온 "후위 반환 타입(suffix return type)" 이라는 문법
// 특징 : 반환 타입이 함수 () 뒤에 있습니다.
// swift, kotlin, Go 등의 언어가 리턴 타입을 뒤쪽에 표기 합니다.
// Python ( type annotation 문법)도 뒤에 표기 합니다.
auto square2(int a) -> int
{
	return a * a;
}


int main()
{
	square1(3);
}