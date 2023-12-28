
// chap. 4 변수와 자료형

// 자료형 (data type)
// 모든 변수는 자료형을 갖는다.
// 정수, 문자, 실수 <--- 대표적인 자료형 3가지

// 정수
// 각 자료형의 차이는 차지하는 공간
// 공간의 크기 차이는 저장할 수 있는 숫자의 범위의 차이가 된다
// int			: 4 byte	-- -20억 ~ 20억
// short		: 2 byte	-- -3만 ~ 3만
// long			: 4 byte
// long long	: 8 byte	-- 훨씬 더 큰 범위

// sizeof 연산자 : data type이 차지하는 공간의 크기를 byte단위로 알려주는 연산자.


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


#if 0
int main() {

	printf("int %d \n", sizeof(int));  // <--- int형이 차지하는 공간

	return 0;
}
#endif

// 데이터 타입 크기와 표현가능한 숫자의 범위

// 1 byte = 8 bit
// 1 byte --> 1024 (== 2^10) --> 1 Kbyte --> 1 MB --> 1 GB --> 1 TB

// 만약, 어떤 정수를 나타내는 데이터 타입이 1 byte라면,
// 표현가능한 숫자 범위는?
//
// 2개 bit가 있으면,	00, 01, 10, 11		(2^2)
//						 0   1   2   3		(0 ~ 2^2-1)		--> 4가지 숫자 표현 가능
//						 0   1  -2  -1		(2^(2-1) ~ 2^(2-1)-1)
// 3개 bit가 있으면,    000, 001, .... , 111	(2^3)
//						8개
//						0, 1, 2, 3, 4, 5, 6, 7		(0 ~ 2^3-1)
//						-4, -3, -2, -1, 0, 1, 2, 3		(-2^(3-1) ~ 2^(3-1)-1
// 4개 bit가 있으면,    0000, 0001, ....., 1111		(2^4)
//						 0, 1, 2, ...., 15			(0 ~ 2^4 -1)
//						-8, -7, ...., 0, 1, 2, ..., 7	(-2^(4-1) ~ 2^(4-1)-1)
//
// int (4 byte == 4 * 8 = 32 bits)
//					2^32 = 2^10 * 2^10 * 2^10 * 2^2
//						 = 1024 * 1024 * 1024 * 4
//						 ~~ 1000 * 1000 * 1000 * 4
//						 = 4,000,000,000
//						   -2,147,483,648 ~~ 2,147,483,648
//
// short (2 byte == 16 bit)
//					2^16 = 2^10 * 2^6
//						 = 1024 * 64
//						 ~~ 64,000

#if 0
int main() {

	printf("%d\n", INT_MAX);  // int형이 나타낼 수 있는 최대 양수값

	return 0;
}
#endif

// 2의 보수, 2's complement  <---- 음수를 나타내는 방법
//
// 3 bit로 나타낼 수 있는 모든 조합
//		000, 001, 010, 100, 011, 101, 110, 111
//		 0	  1	   2    3    4    5    6    7
//		 
//		음수로 반을 쓸 경우, 어떻게 하지
//		맨 왼쪽 비트를 부호비트로 하자 - 0 : 양수, 1 : 음수
//		000, 001, 010, 011 <--- 양수
//		 0    1    2    3
//		100, 101, 110, 111 <--- 음수
//		 -0   -1   -2   -3
//
//		이 방법의 문제점은 0이 두개라는 것.
//
//		2의 보수를 이용한 음수 표현체계,,, 음의 0을 없애자.
//
//		양수 <--> 음수
//			비트를 모두 toggle (on-> off, off-> on)
//			+1
//
//		양수 1 --> 001 (이진수)
//		2의 보수를 이용해서 음수 -1을 만들어 보자
//		001 -- toggle --> 110 -- +1 --> 111 (음수 -1)
//	-1	111 -- toggle --> 000 -- +1 --> 001
//
//		음의 0을 없애버렸음
//		000 (양의 0) --> 111 --> 000
//
//		아까 음의 0이었던 100은 도대체 무슨 숫자?
//			이걸 알려면 2의 보수체계에 의해 양수로 바꿔보면 된다
//		100 -- toggle --> 011 -- +1 --> 100
// 
//			-4 -3 -2 -1 0 1 2 3

//		100   101   110   111   000   001   010   011
//		 -4    -3    -2    -1    0     1     2     3
//
//	unsigned int
//	unsigned short
//	unsigned long
//	unsigned long long


//	overflow, underflow

#if 0
int main() {

	int a = INT_MAX;  // overflow
	a = a + 1;

	int b = INT_MIN;  // underflow
	b = b - 1;

	printf("%d\n", a);

	printf("%d\n", b);

	return 0;
}
#endif

// 실수형,

// floating point number (부동소수점형) <--- 이름의 유래를 알아보자

// 옛날 옛적에, fixed point number (고정소수점형)
//    소수점을 가진 숫자를 표현하는 방법

//	float, double, long double
//	float : sizeof(float) --> 4
//			sizeof(double) --> 8

//#include<float.h>
#if 0
int main() {

	printf("float max %f\n", FLT_MAX);
	printf("float min %e\n", FLT_MIN);
	printf("double max %e\n", DBL_MAX);
	printf("double min %e\n", DBL_MIN);

	return 0;
}
#endif

// p.147쪽
#if 0
int main() {

	float a = 0.1;

	printf("%.20f\n", a);

	return 0;
}
#endif

// p.148 부동소수점형을 사용할 경우, 주의할 점
#if 0
int main() {

	double d;

	d = (1.0e20 + 5.0) - 1.0e20;

	printf("%f \n", d);

	return 0;
}
#endif

// p. 149 문자형

// char

// ASCII code ---> 문자의 학번
// American Standard Code for Information Interchange

// p. 150 --> code table
#if 0
int main() {

	char a = 'a';
	char b = 'z';

	printf("%c\n", a);
	printf("%c\n", b);

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
#endif

// 5장

#if 0
int main() {

	// 산술 연산자 ---> binary operator
	// +, -, *, /, %
	int a;

	a = a + 3;
	a = a - 20;
	a = a * 10;
	a = a / 1;
	a = a % 3;

	// p.171
	// 부호 연산자
	a = -10;  // -1을 곱하는 효과 --> unary operator
	a = -a;

	// p.171 증감연산자
	a++;
	a = a + 1;

	++a;
	a = a + 1;

	a--;
	a = a - 1;

	--a;
	a = a - 1;

	return 0;
}
#endif
