#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>

// Chap. 5 수식과 연산자

// 산술연산자. p. 167
// +, -, *, /, %

#if 1
int main() {

	int a;
	int b;
	int c;

	a = 10;  // assignment operator
	b = 20;

	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;  // a / b = 0
	c = a % b;

	// p. 171 부호연산자
	a = -10;

	// 증감연산자 (++, --)는 앞, 뒤에 따라서 연산순서가 바뀌니, 다른 연산자와 섞어 쓰지 마세요.
	a = 20;
	a++;  // a = 21
	++a;  // 22

	// p.171
	a = 20;
	b = a++;
	printf("b value is %d\n", b);
	printf("a value is %d\n", a);

	a = 20;
	b = ++a;
	printf("b value is %d\n", b);
	printf("a value is %d\n", a);

	// 코드의 가독성
	a = 20;

	// b = a++
	a++;
	b = a;

	// b = ++a
	b = a;
	++a;

	// p. 175 대입연산자

	// b = a = 10;  // X

	b = 10;
	a = 10;  // O

	// p. 179
	// 관계연산자

	// >  <  >=  <=  !=  ==

	// C언어에서 거짓, False는 0
	//			   참, True는 0이 아닌 모든 숫자, 대부분 1을 사용

	printf("%d \n", (5 > 4));  // 1
	printf("%d \n", (5 < 4));  // 0
	printf("%d \n", (5 >= 4));  // 1
	printf("%d \n", (5 <= 4));  // 0
	printf("%d \n", (5 != 4));  // 1
	printf("%d \n", (5 == 4));  // 0

	// 논리연산자
	// && : and
	// || : or
	// !  : not
	// 관계연산자 결과들을 결합시킬 때

	// &&
	//		1 && 1 =1
	//		1 && 0 
	//		0 && 1
	//		0 && 0

	// || (enter키 위에) 
	//		1 || 1, 1 || 0, 0 || 1 ==> 1
	//		0 || 0 ==> 0

	// ! (not)
	//		!1 ==> 0
	//		!0 ==> 1

	// a에 담긴 숫자가 짝수면 0을 출력
	printf("결과 %d\n", !((a % 2) == 0));
	printf("결과 %d\n", (a % 2) != 0);

	// a에 단긴 숫자가 홀수이면서, (and) 끝자리가 7이면 ==> 1, 아니면 0을 출력하시오.
	printf("결과 %d\n", (((a % 2) == 1) && ((a % 10) == 7)));
	printf("결과 %d\n", a % 2 == 1 && a % 10 == 7);

	// a에 담긴 숫자가 짝수이면서 10의 자리가 7이면 ==> 1, 아니면 0
	printf("결과 %d\n", (((a % 2) == 0) && (((a / 10) % 10) == 7)));

	// a에 담긴 숫자가 2자리수 이상이면 ==> 1, 아니면 0
	printf("결과 %d\n", (a / 10) > 0);

	// a에 담긴 숫자가 2자리수인 경우에 ==> 0, 아니면 1
	// 10으로 나누 몫이 0보다 커야 하고, 100으로 나눈 몫이 1보다 작으면 ===> 2자리수
	printf("결과 %d\n", !(((a / 10) > 0) && ((a / 100) < 1)));

	// 5.6 조건연산자
	//
	// a에 담긴 값이 10보다 크면, b에 20을 대입, 아니면 10을 대입
	b = (a > 10) ? 20 : 10;

	// a에 담긴 값이 짝수면, b에 10을 저장, 아니면 -10을 저장
	b = ((a & 2) == 0) ? 10 : -10;

	// a와 b의 합의 10의 자리수가 짝수면, b에 10, 아니면 -10을 저장
	b = (((((a + b) / 10) & 10) & 2) == 0) ? 10 : -10;

	// p .189 콤마연산자, skip....
	// 
	// p. 190 비트연산자
	// 바이트로 된 데이터를 bit 단위로 연산
	char x = 1;  // 1byte = 8 bit	0000_0001
	char y = 2;  //					0000_0010

	// 비트연산자 
	// &  : and
	// |  : or 
	// ^  : xor
	// << :left shift
	// >> : right shift
	// ~  : bit not

	char z = x & y;
	printf("%d\n", z);  // ===> 0

	z = x | y;
	printf("%d\n", z);  // ===> 3

	char x = 5;  // 1byte = 8 bit	0000_0101
	char y = 4;  //					0000_0100
	z = x ^ y;  // xor : exclusivelu O
	printf("%d\n", z);

	// << (left shift) : 0000_0001 ==> 0000_0010 (2배를 시켜줌)     // 속도가 매우 빨라짐
	// >> (right shift)

	// ~ : 0000_0001 ==> 1111_1110

	// 5.9 형변환
	int k;
	k = 3.14;  // 암묵적 형변환, implicit, 알아서 한다. casting
	k = (int)3.14;  // 명시적 형변환, explicit

	// 5.7 연산자 우선순위
	// p. 204 연산자 우선순위 표

	k = 1 + 5 * 10;  // ==> k = (1 + (5 * 10));  // 항상 괄호를 치는 연습하기
	k = a++ + 4 * 10;  // ==> k = (a + (4 * 10));  a++;

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

#if 0
int main() {


	return 0;
}
#endif