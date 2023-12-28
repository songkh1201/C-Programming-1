#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include <limits.h>
#include<stdio.h>


// Ch.4 변수와 자료형

// 4.1 변수와 상수

// 변수란 무엇인가?


#if 0
int main() {

	int x = 0;
	int y = 0;

	int sum = 0;

	// 변수 : x, y ,sum
	//변수에 이름을 부여하여, 메모리 공간에 접근 가능

	return 0;
}
#endif

// 원의 면적을 계산하는 프로그램

#if 0
int main() {

	//변수
	double radius; // 원의 반지름
	double area;   //원의 면적

	printf("원의 면적을 입력하시오");
	scanf("%lf", &radius);

	// 3.141592 는 상수 -> 컴퓨터가 계산을 위해선 모든 데이터가 메모리에 존재해야함
	// 따라서 상수도 메모리에 저장된다. 다만 변수와 달리 이름이 없고, 수정할 수 없다.

	//원의 면적을 상수를 이용해서 계산
	area = 3.141592 * radius * radius;
	printf("원의 면적: %f n", area);

	return 0;
}
#endif

// 4.2 자료형

// 자료형에는 정수형, 부동 소수점형, 문자형이 있다.

// 정수형에는 정수 타입의 데이터를 저장할 수 있음
// -> short, int, long, long long 등
// 부동 소수점형은 실수 타입의 데이터를 저장할 수 있음
// -> float, double, long double 등
// 문자형은 하나의 문자를 저장할 수 있음
// -> char : 정수형으로 분류하기도 함, 문자가 작은 정수로 표현됨

// 자료형의 크기를 출력하는 프로그램

# if 0
int main() {

	int x;
	printf("변수 x의           크기: %d\n", sizeof(x));

	printf("char			   크기: %d\n", sizeof(char)); //자료형의 크기
	printf("short			   크기: %d\n", sizeof(short));
	printf("long			   크기: %d\n", sizeof(long));
	printf("long long    	   크기: %d\n", sizeof(long long));
	printf("float			   크기: %d\n", sizeof(float));
	printf("double			   크기: %d\n", sizeof(double));

	return 0;
}
#endif

// 4.3 정수형

/*
   short     -> 2byte (16bit)
   int       -> 4byte (32bit)
   long      -> 4byte (32bit)
   long long -> 8byte (64bit)
   */

#if 0

   // #include <limits.h>

   // #define PI 3.141592


int main() {

	// 오버플로우 (overflow)
	// 정수형 변수가 나타낼 수 있는 정수의 범위가 제한되어 있기 때문에 발생함.
	// 정수형 변수를 이용하여 덧셈과 같은 산술 연산을 하는 경우,
	// 산술 연산의 결과가 정수형이 나타낼 수 있는 범위를 넘어갈 수 있음.

	short s = SHRT_MAX; //최대값으로 초기화, 32767
	unsigned short us = USHRT_MAX; // 최대값으로 초기화, 65535

	printf("short max s: %d\n", s); // 32767   /   /  -32768 ~ 32767
	s = s + 1;
	printf("short max s + 1: %d\n", s); // -32768  

	printf("----------------------------------\n");


	printf("unsigned short max us: %d\n", us);  // 65535
	us = us + 1;
	printf("unsigned short max us + 1: %d\n", us);  // 0

	printf("----------------------------------\n");


	return 0;
}


#endif

// 자료형의 출력

#if 0
int main() {

	float f = 123.4567f;

	printf("%%f : %f \n", f);
	printf("%%e : %e \n", f);

	return 0;
}
#endif

// Ch.4 Programming

// 01. 하나의 실수를 입력받아 소수점 표기방법과 지수 표기방법으로 동시에 출력하는 프로그램

#if 0
int main() {

	float a;
	scanf("%f", &a);
	printf("실수 형식으로는 : %f\n", a);
	printf("정수 형식으로는 : %e\n", a);

	return 0;
}
#endif

// 02. 정수를 16진수로 입력받아서, 8진수, 10진수, 16진수 형태로 출력하는 프로그램

#if 0
int main() {

	int a;
	scanf("%x", &a); // 16진수 정수 입력받음

	printf("8진수로는 : %o\n", a);
	printf("10진수로는 : %d\n", a);
	printf("16진수로는 : %#x\n", a);

	return 0;
}
#endif

// 03. int 형의 변수 x와 y의 값을 서로 교환하는 프로그램
// 별도의 변수가 필요하면 정의해서 사용
// 변수 x와 y는 10, 20의 값으로 초기화하라

#if 0
int main() {

	int x = 10;
	int y = 20;

	printf("x=%d, y=%d\n", x, y);

	int temp;  // 1. x -> temp     2. y -> x     3. temp -> y

	temp = x;
	x = y;
	y = temp;

	printf("x=%d, y=%d\n", x, y);

	return 0;
}
#endif


#if 0
int main() {
	// 1020 : [문법-입출력] 실수 한 개 입력받아 둘째 자리까지 출력하기
	/*실수(float)하나를 입력받아 저장한 후,
	저장되어있는 값을 소수점 3째 자리에서 반올림해 2째 자리까지 출력하시오.*/

	float input = 0;
	scanf("%f", &input);
	printf("%.2f", input);

	return 0;
}
#endif

#if 0
int main() {

	//1022: [문법-입출력] 시간 입력받아 그대로 출력하기
	/*시간이 어떤 형식에 맞추어 입력될 때,
	그대로 출력하는 연습을 해보자.*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

	int h = 0;
	int m = 0;
	scanf("%d:%d", &h, &m);
	printf("%d:%d", h, m);

	return 0;
}
#endif

#if 0
int main() {

	//1023

	int a = 0;
	scanf("%d", &a);
	printf("%d %d %d", a, a, a);

	return 0;
}
#endif