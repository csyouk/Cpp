/*
다음은 명함을 의미하는 NameCard 클래스이다. 이 클래스에는 성명,회사이름,전화번호,직급이 저장된다.
직급을 제외한 나머지 멤버는 문자열 형태이며, 문자열멤버는 동적할당을 받기로 한다.
직급은 나열형을 제공한다. enum선언에서 나열된 정보는 순서대로 사원,주임,대리,과장을 뜻한다.

main() 함수를 참도하여 다음의 싷행결과를 출력하라.

실행결과
이름: Lee
회사: ABCEng
전화번호: 010-1111-2222
직급: 사원

이름: Hong
회사: OrangeEng
전화번호: 010-3333-4444
직급: 주임

이름: Kim
회사: SoGoodCompa
전화번호: 010-5555-6666
직급: 대리

소멸자 호출에서 동적메모리 멤버 해제 됨~~
소멸자 호출에서 동적메모리 멤버 해제 됨~~
소멸자 호출에서 동적메모리 멤버 해제 됨~~
*/
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	char * positions[] = {"사원", "주임", "대리", "과장"};
	char * CShowPositonInfo(int position){
		return positions[position];
	}
	void ShowPositionInfo(int position)
	{
		switch (position){
		case CLERK:
			cout << "사원";
			break;
		case SENIOR:
			cout << "주임";
			break;
		case ASSIST:
			cout << "대리";
			break;
		case MANAGER:
			cout << "과장";
			break;
		default:
			break;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone;
	int position;
public:
	NameCard(char * _name, char * _company, char * _phone, int _pos)
	{
		//추가
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);

		company = new char[strlen(_company) + 1];
		strcpy(company, _company);

		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);

		position = _pos;
	}

	void ShowNameCardInfo()
	{
		//추가
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		//cout << "직급 : ";
		//COMP_POS::ShowPositionInfo(position);
		//cout << endl;

		cout << "직급 : " << COMP_POS::CShowPositonInfo(position) << endl;
	}

	~NameCard()
	{
		//추가
		cout << "소멸자 호출에서 동적메모리 멤버 해제 됨~~" << endl;
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};



int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodCompa", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
