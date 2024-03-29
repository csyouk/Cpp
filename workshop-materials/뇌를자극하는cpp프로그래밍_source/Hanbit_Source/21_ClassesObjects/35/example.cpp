#include "point.h"

// void XX() 형태의 함수에 대한 포인터
typedef void (*FP1)(int);
// void Point::XX() 형태의 멤버 함수에 대한 포인터
typedef void (Point::*FP2)(int);

int main()
{
	// 객체를 생성한다.
	Point pt(50, 50);

	// FP1, FP2를 사용해서 Print() 함수를 가리킨다.
	// FP1 fp1 = &Point::SetX;	// 에러
	FP2 fp2 = &Point::SetX;	// 성공

	// 함수 포인터를 사용해서 함수 호출
	(pt.*fp2)(100);	

	// 내용 출력
	pt.Print();

	return 0;
}
