void sub();

int main()
{
	// 변수를 정의한다.
	int a = 3;

	// 함수 호출
	sub();

	return 0;
}

void sub()
{
	// 변수를 사용한다.
	++a;			// 에러
}