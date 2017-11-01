# static member
- 같은 클래스에서 객체가 생성될 때마다 값을 공유한다.
- main 함수 호출 이전에 메모리 공간에 올라가서 초기화.
  - Data segment에 저장이 되는 변수이다.
- 선언된 클래스의 객체 내에 직접 접근 허용
- static 멤버 초기화문으로 초기화해야 함.
  - 예를 들면 다음 구문과 같이 초기화 해야 한다.
  - ```int Person::count = 1;```
- **생성자에서 값을 할당할 수 없다.**
  - C++의 생성자는 값의 초기화만 전담한다.
  - 즉, 값의 변경은 불가하다.
- 객체의 멤버로 존재하는 것이 아닌, 클래스 내에서 접근할 수 있는 권한이 부여된 것이다. (클래스 전역변수)
- 객체가 소멸되어도 정적변수는  프로세스가  종료되기 까지 메모리에 남겨있다.
  - 데이터 세그먼트에 저장되어 있기 때문에, 프로그램과 라이프 싸이클을 같이 한다.

# static method
- static 키워드를 함수 선언부의 리턴 타입 앞에
- 정적 메소드는 정적 멤버에만 접근할 수 있다.
  - 정적 메소드는 객체의 멤버에 접근이 불가하다.
  - 정적 메소드는 일반멤버 함수를 호출할 수 없다.
- 일반 메소드는 일반멤버, 정적멤버, 정적 메소드 모두 접근 가능하다.