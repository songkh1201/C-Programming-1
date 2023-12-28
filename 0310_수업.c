#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {

	// 변수의 생성
	// int, integer --> data type (데이터형)
	// C laguage - strictly typed laguage

	int x;
	int y;
	int sum;  // x와 y의 합을 저장
	//int x, y, sum;  // p.98

	// 변수는 사용되기 전에 선언되어야 한다  p.97
	// 사용하기 전 어떤 타입의 변수인지 선언해야 함

	return 0;
}

int main(void) {

	// p.98 변수의 이름짓기

	// 1. 형식
	//   이름글자는 숫자, 영문자, 밑줄문자 (_, underscore)
	//   중간 공백 안됨  --> good name
	//   이름 첫글자는 영문자 또는 _ -->  123name(x), name123(o)
	//   대소문자 구별됨  myname Myname
	//   예약이름 안됨    (p.99) main, int
	//   이름이 얼마나 길 수 있나요?   63글자   (p.100)

	// 2. 의미
	//   좋은 변수 이름  (p.100)
	//   sum

	// 변수의 초기화 (variable initialization)   (p.100)

	int x = 10;
	int y = 20;
	int sum = 0;

	int x;  // garbage value (쓰레기값)

	int x = 10, y = 20;


	// p.101
	int x, y = 100;  // x는 초기화, y는 쓰레기값


	// p.101 3.6 수식과 연산

	//p.102 산술연산, +,-,*,/,%
	int x = 0;
	int y = 0;
	int res = 0;

	res = x + y;
	res = x - y;
	res = x * y;
	res = x / y;   // int variable에 대해서는 버림 3/2 = 1
	res = x % y;   // modulo, 나눈 나머지 5 % 7 = 5, 12 % 7 = 5


	return 0;
}

int main(void) {

	// p.104 - printf
	printf("hello world\n");   // string(문자열) 출력

	// p. 105,  variable value 출력
	int x = 10;
	int y = 20;

	printf("%d\n", x);   // d == decimal(십진수)
	printf("x value is %d\n", x);
	printf("x y values are %d %d\n", x, y);   // variable 2개 출력

	float z = 3.14;
	printf("z value is %f\n", z);   // f는  실수형

	// printf : f== formatted

	int a = 123;
	printf("a value is <%d>\n", a);   // a value is <123>
	printf("a value is <%10d>\n", a);   // a value is <       123>
	printf("a value is <%-10d>\n", a);   // a value is <123       >

	// p.106 : 필드폭(width)와 정밀도(precision)
	// %10.3f : 10==width, 3==precision
	float b = 1.23456789;
	printf("b value is %f\n", b);   // b value is 1.2345678
	printf("b value is %10.3f\n", b);   // b value is      1.235
	printf("b value is %-10.3f\n", b);   // b value is 1.235     
	printf("b value is %.3f\n", b);   // b value is 1.235 

	return 0;
}

int main(void) {

	// p,108, 3.8 scanf : scan-formatted, 키보드를 통한 값을 입력

	int x;
	scanf("%d", &x);  // _CRT_SECURE_NO_WARNINGS (오류)
	printf("x value is %d\n", x);

	// p.109, 실수를 입력받는 scanf
	float a = 0.0;
	scanf("%f", &a);
	printf("입력한 실수는 %f\n", a);

	return 0;
}

int main(void) {

	// p. 111, 덧셈 프로그램 #2
	// 2개의 정수를 입력받아, 그 합을 출력하는 프로그램
	// p.112 하단에 소스코드
	int a1 = 0;   // 첫번째 입력된 숫자
	int a2 = 0;   // 두번째 입력된 숫자
	int sum = 0;   // 합을 저장하는 변수

	printf("첫번째 숫자를 입력하세요:");
	scanf("%d", &a1);

	printf("두번째 숫자를 입력하세요:");
	scanf("%d", &a2);

	sum = a1 + a2;
	printf("당신이 원했던 합은 %d\n", sum);

	return 0;
}


#if 0



#endif