#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// 데이터형의 정의
// 구조체, 공용체, 열거형, typedef

// 구조체 structure 필요 이유
// c언어에서 제공하는 데이터형 불충분
//		int, float, char 한계
// 복합자료형이 필요
//		자료형 안에 int, float, char 등이 들어간 형태
//		예: 학생정보, 이름(char[]) 나이(int)
//		    학점(float), 담기 위한 복합 자료형 필요
// 구조체를 이용하여 복합 자료형을 만들 수 있어

// 구조체 정의 문법
// 
// struct my_type {
//		int age;
//		char name;
// };
// 
// keyword struct로 시작
//
// my_type: 개발자 마음대로 붙일 수 있는 이름
//
// {  }; 구조체 선언의 시작과 끝 경계를 표시
//		구조체 종결은 ;
//
// Struct Members
//		int age
//		char name
//		멤버간의 구분은 semicolon


// 구조체 변수 선언
// 
// 정의된 구조체는 새로운 타입
// 일반 변수 선언하는 방식과 동일
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// 구조체 변수 a
	struct my_type a;

	// 구조체 배열변수 b
	struct my_type b[3];

	return 0;
}
#endif

// 구조체 변수 초기화
//
// 변수 선언과 동시에 할당
// 멤버에 해당하는 값들을 순서대로 기술
//		값들은 {...} 안에 표시
//		멤버 데이터형과 일치하도록
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// 구조체 변수 a
	struct my_type a = { 10, 'a' };
	return 0;
}
#endif

// 구조체 배열변수 초기화
//
// 배열 요소별로 초기화
//		각 요소는 구조체 변수 초기화 하는 방식
//		멤버 정의 순서에 맞추어
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// 구조체 배열변수 b
	struct my_type b[3] = {
		{20, 'a'},
		{30, 'b'},
		{40, 'c'}
	};
	return 0;
}
#endif

// 구조체멤버 접근
//
// 구조체 변수에 dot(.)을 이용
//		변수.멤버
//		멤버 이름을 지정
//		read/write 모두 가능
// 변수 선언 후에는 초기화와 같은 방식 불가
#if 0
struct my_type {
	int age;
	char name;
};
int main() {

	// 구조체 변수 a
	struct my_type a;

	// 멤버에 값 assignment
	a.age = 20;
	a.name = 'k';

	// 선언 완료후에는 초기화와 같은 방식 사용 불가
	// a = {20, 'k'};

	// 멤버 값 read
	printf("%d\n", a.age);
	printf("%c\n", a.name);

	return 0;
}
#endif

// 구조체 변수간 대입 (ssignment)
// 
// 구조체 변수 a 초기화
// 변수 a의 초기값이 변수 b에 그대로 복사
#if 0
struct my_info {
	int age;
	char name;
};
int main() {

	struct my_info a = { 20, 'A' };
	struct my_info b;

	b = a;

	printf("After assignment: %d %c \n", b.age, b.name);

	return 0;
}
#endif

// 구조체 변수간 비교
// 
// 구조체 변수들이 같은 값을 가진다는 것은 멤버들의 값이 동일
// 
// 변수가 비교 불가
//		a == b : 불가능
// 
// 멤버별로 비교해야 함
#if 0
#include<string.h>
struct Student {
	char name;
	int age;
	float height;
};
int main() {

	// 구조체 변수
	struct Student a = { "john", 20, 175.5 };
	struct Student b = { "john", 20, 175.5 };

	// if (a == b) ==> 구조체끼리는 통으로 비교가 안됨!!!

	//
	// strcmp : string compare
	//
	if ((a.age == b.age) && (a.height == b.height) && strcmp(a.name, b.name) == 0) {
		printf("두 구조체 쌍둥이!!!\n");
	}
	else {
		printf("두 구조체 달라!!!\n");
	}

	return 0;
}
#endif

// 구조체와 포인터
//
// 2가지 관계가 가능
// 
// 1. 구조체를 가리키는 포인터
//		포인터 변수
//		포인터 변수가 가지는 주소에 구조체가 위치
// 
// 2. 포인터를 멤버로 가지는 구조체
//		멤버의 데이터형이 포인터

// 구조체를 가리키는 포인터
#if 0
#include<string.h>
struct Person {
	char name[20];
	int age;
};
int main() {
	// 구조체 변수 선언
	struct Person person1;
	// 구조체 포인터 변수 선언 및 구조체 변수의 주소 할당
	struct Person* ptr = &person1;

	// 구조체 멤버에 값 할당 하는 2가지 방법
	//
	// 1. 구조체 변수 사용
	strcpy(person1.name, "Jone");
	person1.age = 25;
	// 2. 구조체에 대한 포인터 변수 사용
	strcpy(ptr->name, "John");
	ptr->age = 25;

	// 구조체 멤버 출력하는 2가지 방법
	//
	// 1. 구조체 변수
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	// 2. 구조체에 대한 포인터 변수 사용
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);
	return 0;
}
#endif

// Recap: 구조체를 가리키는 포인터
//
// 구조체 멤버 지정하는 2가지 방법
//		dot	  : .
//		arrow : ->
// 
// dot을 사용하는 경우
//		구조체 변수를 사용할 때
//		예. a.name
// 
// Arrow를 사용하는 경우
//		구조체에 대한 포인터 변수를 사용할 때
//		예. ptr->name

// 포인터 dereferening과 구조체 멤버 접근
// 
// Dereferencing된 포인터는 변수와 동일;
// dot을 이용하여 멤버접근
// 
// Dereferencing에 괄호를 사용하여 우선순위 지정
// 
// *ptr.name
//		*(ptr.name)을 의미
//		(*ptr).name과는 다름
#if 0
struct Person {
	char name[20];
	int age;
};
int main() {
	// 구조체 변수 선언 및 초기화
	struct Person person1 = { "John", 25 };

	// 구조체 포인터 선언 및 구조체 변수의 주소 할당
	struct Person* ptr = &person1;

	// 포인터를 이용한 멤버 접근 (-> 연산자 사용)
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);

	// 포인터 dereferencing을 이용한 멤버 접근
	printf("Name: %s\n", (*ptr).name);
	printf("Age: %d\n", (*ptr).age);

	return 0;
}
#endif

// 포인터를 멤버로 가지는 구조체
// 구조체 내부에 포인터 주소 저장을 위한 공간만 확보
#if 0
struct Course {
	char name[20];
	int credits;
};
struct Student {
	char name[20];
	int age;
	struct Course* course; // struct Course에 대한 포인터 멤버
};
int main() {
	// 구조체 변수 선언
	struct Course course1 = { "Math", 3 };
	struct Student student1 = { "John", 20, &course1 };
	// 구조체 멤버에 접근하여 출력
	printf("Name: %s\n", student1.name);
	printf("Age: %d\n", student1.age);
	printf("Course: %s\n", student1.course->name);
	printf("Credits: %d\n", student1.course->credits);

	return 0;
}
#endif

// 멤버로서의 구조체와 구조체 포인터
// 
// 구조체 안에 다른 구조체가 멤버로 포함된 경우
//		포함된 구조체의 공간은 포함하는 구조체 공간에 포함
// 
// 구조체 안에 다른 구조체에 대한 포인터 변수가 포함된 경우
//		포함하는 구조체 공간에는 포인터 변수를 위한 공간만 포함


// 구조체가 다른 구조체를 포함한 경우
// Outer structure 안에 Inner Structure가 포함
// ? Inner Structure의 공간 필요


// 구조체가 포인터를 멤버로 가지는 경우
//
// Outer structure는 Inner structur형의 포인터멤버를 포함
// 
// 포인터는 다른 곳에 존재하는Inner structure의 주소를 저장
// 
// Outer structur의 공간에는 포인터 변수저장을 위한 공간만 할당


// 구조체 안의 구조체 예제
//
// 구조체 안의 구조체는 연속된dot에 의해서 멤버로서 접근
#if 0
// Inner Structure 정의
struct InnerStruct {
	int innerMember;
};
// Outer Structure 정의
struct OuterStruct {
	int outerMember;
	struct InnerStruct innerStruct; // Inner Structure를 멤버로 포함
};
int main() {
	// Outer Structure 변수 생성
	struct OuterStruct myStruct;
	// 멤버에 값 할당
	myStruct.outerMember = 10;
	myStruct.innerStruct.innerMember = 20;
	// 값 출력
	printf("Outer Member: %d\n", myStruct.outerMember);
	printf("Inner Member: %d\n", myStruct.innerStruct.innerMember);

	return 0;
}
#endif

// 구조체 안의 구조체 포인터 예제
// 구조체 포인터 멤버를 이용할 경우, 
// 그 속에 포함된 멤버를 접근하려면 arrow를 이용
#if 0
// Inner Structure 정의
struct InnerStruct {
	int innerMember;
};
// Outer Structure 정의
struct OuterStruct {
	int outerMember;
	struct InnerStruct* innerStructPtr;
};
int main() {
	// Inner Structure 변수 생성 및 값 설정
	struct InnerStruct inner;
	inner.innerMember = 20;
	// Outer Structure 변수 생성 및 멤버 설정
	struct OuterStruct myStruct;
	myStruct.outerMember = 10;
	myStruct.innerStructPtr = &inner;
	// 값 출력
	printf("Outer Member: %d\n", myStruct.outerMember);
	printf("Inner Member: %d\n", myStruct.innerStructPtr->innerMember);
	return 0;
}
#endif

// 구조체와 함수
//
// 구조체를 함수의 인수로 넘기는 경우
//		call-by-value로 전달
//		복사본으로 전달
// 
// 구조체가 함수의 반환값이 되는 경우
//		복사본이 만들어져 전달
// 
// 구조체 인수와 call-by-reference
//		구조체 포인터 변수 이용 필요


// 함수 인수로서의 구조체 : call-by-value
//
// modifyStruct 함수는 call-by-value 원칙
// 
// modifyStruct 함수 호출 전과 후의 값이 변함없음
#if 0
// 구조체 정의
struct MyStruct {
	int member1;
	int member2;
};
// 함수 정의
void modifyStruct(struct MyStruct myStruct) {
	myStruct.member1 = 20; // 구조체의 멤버 값을 변경
	myStruct.member2 = 30;
}
int main() {
	struct MyStruct myStruct;
	myStruct.member1 = 10;
	myStruct.member2 = 15;

	printf("Before modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);

	modifyStruct(myStruct);

	printf("After modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);
	return 0;
}
#endif

// 함수 인수로서의 구조체 : call-by-reference
//
// modifyStruct 함수는 구조체 포인터 인수 사용
// 
// 함수 호출 전과 후로 인해서 값 변동
// 
// modifyStruct함수호출할 때, 
// myStruct에address operator &
// 사용하여 주소 전달
#if 0
// 구조체 정의
struct MyStruct {
	int member1;
	int member2;
};
// 함수 정의
void modifyStruct(struct MyStruct* myStruct) {
	myStruct->member1 = 20; // 구조체의 멤버 값을 변경
	myStruct->member2 = 30;
}
int main() {
	struct MyStruct myStruct;
	myStruct.member1 = 10;
	myStruct.member2 = 15;

	printf("Before modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);

	modifyStruct(&myStruct); // 구조체의 주소를 전달

	printf("After modification:\n");
	printf("Member 1: %d\n", myStruct.member1);
	printf("Member 2: %d\n", myStruct.member2);
	return 0;
}
#endif

// 함수 반환값으로 구조체
// createStruct 함수는 구조체를 생성하여 반환
#if 0
// 구조체 정의
struct MyStruct {
	int member1;
	int member2;
};
// 함수 정의
struct MyStruct createStruct(int value1, int value2) {
	struct MyStruct myStruct;
	myStruct.member1 = value1;
	myStruct.member2 = value2;
	return myStruct;
}
int main() {
	struct MyStruct resultStruct;
	resultStruct = createStruct(10, 20);
	printf("Member 1: %d\n", resultStruct.member1);
	printf("Member 2: %d\n", resultStruct.member2);
	return 0;
}
#endif


// 공용체 (union) 개념과 필요성
//
// 여러 데이터형의 멤버가 하나의 메모리 영역을 공유
//
// 구조체: 멤버들이 독자 영역을 차지
// 
// 필요성
//		메모리 절약
//		유연한 구조관리 능력
#if 0
// 공용체 선언
union Data {
	int i;
	float f;
	char str[20];
};
int main() {
	union Data data; // 공용체 변수 선언

	data.i = 10; // 정수형 멤버에 값 할당
	printf("Data.i: %d\n", data.i);

	data.f = 3.14; // 실수형 멤버에 값 할당
	printf("Data.f: %f\n", data.f);

	strcpy(data.str, "Hello"); // 문자열 멤버에 값 할당
	printf("Data.str: %s\n", data.str);
	return 0;
}
#endif

// 구조체와 공용체 차이
//
// 왼쪽 구조체
//		멤버들이 독립공간 차지
//		구조체 공간 = 멤버들의 공간 합
// 
// 오른쪽 공용체
//		멤버들이 공간 공유
//		공용체 공간 = max(멤버i 공간), 멤버i ∈ M,
//		    M은 공용체 멤버들의 집합


// 공용체 변수의 초기화
//
// 공용체의 첫 번째 멤버의 데이터형의 값으로 초기화
//
// 왼쪽 예에서, 초기값은 unsigned int 형
#if 0
union info {
	unsigned int sid;
	char name[10];
};
int main() {

	union info a[3] = {
		{200011},
		{20210002},
		{20210003},
	}

	return 0;
}
#endif

// enum (열거형) 선언과 사용
//
// Enumeration 약자
//		열거
// 
// 일정범위의 값들을 가지는 데이터형의 생성
// 
// 범위값은 정수이지만, 별도 이름 부여
//		0 : RED
//		1 : GREEN
//		2 : BLUE
// 
// 정수값은 0부터 부여가 일반적
#if 0
enum colors { RED, GREEN, BLUE };
enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
int main() {

	enum colors c;

	c = RED;

	printf("c has value: %d", c);

	return 0;
}
#endif

// 0이 아닌 정수부터 시작하는 enum형 선언
//
// enum Days 형은 첫 번째 요소인 MON=1 
// 
// TUE, WED 등은 이후 순차적인 숫자가 할당
// 
// 가독성과 일관성을 위해서 0부터 시작 추천
#if 0
enum Days {
	MON = 1,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
};
int main() {
	enum Days today = TUE;
	printf("Today is day number: %d\n", today);
	return 0;
}
#endif

// enum형 변수간의 비교
//
// enum형 변수들은 정수로 처리
// 비교연산자 사용 가능
// 산술연산자 불가능
#if 0
enum colors { RED, GREEN, BLUE };
int main() {

	enum colors c;

	c = RED;

	printf("c has value: %d\n", c);

	printf("RED, GREEN, BLUE: %d %d %d \n", RED, GREEN, BLUE);

	if (c < BLUE) {
		printf("red is smaller than blue");
	}
	else {
		printf("no!!!");
	}
	return 0;
}
#endif

// 키워드 typedef
//
// 데이터형을 새로운 이름으로 정의하는 키워드
// 
// 데이터형에 별칭 부여
// 
// 1개 데이터형 이름에 대해서 복수개의 데이터형 이름 사용 가능
//
// 아래 예: int에 별칭 my_int32를 부여
#if 0
// typedef 'original name'  'new name'
#include<string.h>
typedef int my_int32;
my_int32 main() {

	return 0;
}
#endif

// 키워드 typedef의 구조체와 열거형 적용
//
// 열거형과 구조체 선언과 동시에 별치 부여
// 
// 아래 enum 예
//		COLORS 별칭
//		enum 키워드 불필요
// 
// 아래 struct 예
//		STUDENT 별칭
//		struct 키워드 불필요
// 
// typedef 별칭의 경우 ALL-Capital letters 관습
#if 0
typedef enum { RED, GREEN, BLUE } COLORS;
typedef enum { SUN, MON, SAT } DAYS;

// 1
//struct student {
//	char names[10];
//	unsigned int sid;
//	float grade;
//};
//typedef struct student STUDENT;

typedef struct {
	char names[10];
	unsigned int sid;
	float grade;
} STUDENT;
#endif

#if 0
int main() {

	return 0;
}
#endif

#if 0
int main() {

	return 0;
}
#endif

#if 0
int main() {

	return 0;
}
#endif

#if 0
int main() {

	return 0;
}
#endif

