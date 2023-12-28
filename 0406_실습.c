#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>

// 02. 2개의 double형 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램을 작성하라
//	   결과는 소수 2번째 자리까지 출력하라
#if 0
int main() {

	double num1 = 0;
	double num2 = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);

	double sum = num1 + num2;
	double sub = num1 - num2;
	double mul = num1 * num2;
	double div = num1 / num2;

	printf("%.2f %.2f %.2f %.2f", sum, sub, mul, div);

	return 0;
}
#endif

// 3개의 정수값을 입력받아서, 3개의 정수값 중에서 최대값을 출력하는 프로그랩을 작성하라
#if 0
int main() {

	int a, b, c;
	int max = 0;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;  // a와 b중에서 더 큰값을 max에 저장한다.

	max = (c > max) ? c : max;  // max와 c중에서 더 큰값을 max에 저장한다.

	printf("최대값은 %d입니다.", max);

	return 0;
}
#endif


// 05. 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리리로 분리하여 출력하는 프로그램을 작성하라.
#if 0
int main() {

	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	int a = 0;  // 십의자리
	int b = 0;  // 일의자리

	// 23 -> 2, 3
	a = num / 10;  // 2
	b = num % 10;

	printf("십의자리: %d\n", a);
	printf("일의자리: %d\n", b);

	return 0;
}
#endif

#if 0
int main() {
	//1639: [C언어 실습] 비트 이동 연산
	/*비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int형의 변수 안에 저장하는 프로그램을 작성하시오.
	  첫 번째 문자는 비트 0부터 비트 7까지 저장되고, 두 번째 문자는 비트 8부터 비트
	  15까지 세 번째 문자는 비트 16에서 비트 23까지, 네 번째 문자는 비트 24부터 비트 31까지 저장 된다.
	  결과로 생성되는 정수값은 16진수로 출력하도록 한다. */

	char a, b, c, d;
	unsigned int o = 0;

	scanf("%s %s %s %s", &a, &b, &c, &d);
	o = (d << 24) | (c << 16) | (b << 8) | a;

	printf("%x", o);

	return 0;
}
#endif

#if 0
int main() {
	// 1640: [c언어 실습] 자릿수의 합 구하기
	/*양의 정수 1개를 입력받아 각 자릿수의 합을 출력하시오.
	  예를 들어, 9876이 입력되면 9 + 8 + 7 + 6 = 30이므로 30을 출력해야 한다.
	  줄 끝에는 줄 바꿈 문자가 없어야 한다.
	  입력 정수는 1000부터 9999까지의 값을 갖는다.*/

	int num;
	int a, b, c, d, e = 0;

	scanf("%d", &num);

	a = num % 10;
	b = num / 10 % 10;
	c = num / 100 % 10;
	d = num / 1000;

	e = a + b + c + d;
	printf("%d", e);

	return 0;
}
#endif

#if 0
int main() {
	// 1641: [C언어 실습] 자릿수의 위치와 값 구하기
	/*양의 정수 1개를 입력받아 각 자릿수의 위치와 자릿수의 값을 출력하시오.
	  값 사이는 공백으로 구분되며, 마지막 값 뒤엔 공백이 없다. 줄 끝에는 줄 바꿈 문자가 없어야 한다.
	  예를 들어,
	  9876이 입력되면 4 9 3 8 2 7 1 6이 출력되어야 한다.
	  456이 입력되면 3 4 2 5 1 6이 출력되어야 한다.
	  입력 정수는 10부터 9999까지의 값을 갖는다.*/

	int num;
	int a, b, c, d, e, f, g, h = 0;

	scanf("%d", &num);

	if (num >= 1000) {
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		d = num / 1000;
		e = 4;
		f = 3;
		g = 2;
		h = 1;
		printf("%d %d %d %d %d %d %d %d", e, d, f, c, g, b, h, a);
	}

	if (num < 1000 & num >= 100) {
		a = 3;
		b = num / 100;
		c = 2;
		d = num / 10 % 10;
		e = 1;
		f = num % 10;
		printf("%d %d %d %d %d %d", a, b, c, d, e, f);
	}

	if (num < 100 & num >= 10) {
		a = 2;
		b = num / 10;
		c = 1;
		d = num % 10;
		printf("%d %d %d %d", a, b, c, d);
	}

	return 0;
}
#endif

#if 0
int main() {
	// 문제 번호 C: [C언어 실습] 대소문자 판별
	/*알파벳 문자 1개를 입력 받아, 대문자이면 upper, 소문자이면 lower를 출력하시오.
	  upper와 lower 끝에는 줄 바꿈 문자가 없다.*/
	ad
		char a;
	scanf("%c", &a);

	if (a >= 65 & a <= 90) {
		printf("upper");
	}
	else if (a >= 97 & a <= 122) {
		printf("lower");
	}

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