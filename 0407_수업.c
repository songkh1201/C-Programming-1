#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


// 제어문
//
// 명령문의 실행 순서를 결정(제어)
// 대표적인 제어문
//	 조건문 : 명령문 실행여부를 선택, if, switch
//	 반복문 : 명령문 반복 실행, for, while

// if statement, 조건문
// 조건을 만족시킬 때만 수행되는 명령어를 지정할 수 있다.
// 조건이 참(true, 0이 아닌 모든 정수, 대표적으로 1)일 경우에만 수행.
// 관계 연산자, 논리 연산자를 사용하여 조건 지정 
// 예제. 입력 값이 10 보다 크면 ‘hello’를 출력


#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (a > 10) {  // 괄호를 쓰고, 그 안에 관계/논리연산자로 조건 표시
		// 조건이 참(==1)인 경우, 괄호 ‘{ ‘ 와 ‘ }’ 사이의 명령문 실행.
		printf("hello");  //여러 개의 명령문을 ‘;’으로 분리해서 지정하는 것도 가능
		//  명령문이 한줄이면 {} 생략 가능
		//  - hello 출력 밑에, bye를 출력해도 된다.
	}

	return 0;
}
#endif

// 입력 값이 10보다 작으면 ‘bye’를 출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (a < 10) {
		printf("bye")
	}

	return 0;
}
#endif

// 입력 값이 5와 같으면 ‘five’를 출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (a == 5) {
		printf("five");
	}

	return 0;
}
#endif

// 입력 값이 짝수인 경우 ‘even number’를 출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if ((a % 2) == 0) {
		printf("even number");
	}

	return 0;
}
#endif

// 입력 값이 1과 10사이 값이면 ‘one digit number’를 출력
// 힌트: 관계 연산자는 1개의 값과 비교가 가능.
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if ((a > 1) && (a < 10)) {  // 1 < a < 10 을 표현하기 위해서는, 조건(1 < a) 과  조건(a < 10)을 AND(&&)로 결합해서 표현해야 함.
		printf("one digit number");
	}

	return 0;
}
#endif

// 입력 연도가 윤년 (1년이 366일)이면, ‘leap’을 출력 

#if 0
int main() {
	/*힌트:
	예를 들어, 1992년은 윤년, 1900년은 윤년아님.

	윤년이 되려면  아래 두 조건 중 하나만 만족되면 된다.
	1. 연도가 4로 나누어 떨어지나 100으로는 안되는 경우
	2. 연도가 400으로 나누어 떨어지는 경우  */

	int a;
	scanf("%d", &a);

	if ((((a % 4) == 0) && ((a % 100) != 0)) || ((a % 400) == 0)) {
		printf("leap");
	}

	return 0;
}
#endif

// If-else statement, 조건문
// 조건이 만족될 때 수행되는 명령어와 그렇지 않을 때 수행되는 명령어를 각각 지정
// 조건이 참(true)일 경우와 거짓(false, 0)일 때 분리 수행.
// 관계 연산자, 논리 연산자를 사용하여 조건 지정 
#if 0
int main() {
	// 예제. 입력 값이 10 보다 크면 ‘hello’를 출력하고, 아니면, ‘hi’를 출력

	int a;
	scanf("%d", &a);

	if (a > 10) {
		printf("hello");  // a가 10보다 크면 실행.
	}
	else {
		printf("hi");  // a가 10과 같거나, 작으면 실행.
	}

	// if-else 문과 조건연산자
	(a > 10) ? printf("hello") : printf("hi");

	return 0;
}
#endif

// 입력 값이 10과 다르면 ‘bye’를 출력, 같으면 ‘adios’를 출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (a == 10) {
		printf("adios");
	}
	else {					// if (a != 10) {}
		printf("bye")
	}

	return 0;
}
#endif

// 입력 값이 짝수면 ‘even’을 출력, 홀수면 ‘odd’출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if ((a % 2) == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}

	return 0;
}
#endif

// 입력 값이 짝수이면서, 10보다 크면 ‘ok’ 출력, 아니면 ‘nok’출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (((a % 2) == 0) && (a > 10)) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}
#endif

// 정수 입력 2개를 받아서,
// 둘 다 10보다 작으면 두 수의 곱을 출력하고,
// 아니면 합을 출력
#if 0
int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	if ((a < 10) && (b < 10)) {
		printf("%d", a * b);
	}
	else {
		printf("%d", a + b);
	}

	return 0;
}
#endif

// 정수 입력 3개를 받아 들여,
// 세 수의 합이 30보다 크면 ‘ok’,
// 아니면 ‘nok’를 출력
#if 0
int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if ((a + b + c) > 30) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}
#endif

// 1310: 둘 중 큰 수
#if 0
int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}

	return 0;
}
#endif

// 1311: 양수로 바꿔!
#if 0
int main() {

	int a = 0;

	scanf("%d", &a);

	if (a < 0) {
		a = -a;
	}
	else {
		a = a;
	}

	printf("%d", a);

	return 0;
}
#endif

// 1312: 나누어 떨어지는가?
#if 0
int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	if ((a % b) == 0) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}

#endif

// if  else if statement, 조건문
// 조건을 2개 이상 명시할 대 사용.
// 조건이 참(true)이 되는 경우에 해당하는 if를 수행.
// 관계 연산자, 논리 연산자를 사용하여 조건 지정 
// 
// 예제. 입력 값이 1 <= x <= 10 이면 1을 출력
//                11 <= x <= 20 이면 2를 출력
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if ((a >= 1) && (a <= 10)) {
		printf("1");
	}
	else if ((a >= 11) && (a <= 20)) {
		printf("2");
	}

	return 0;
}
#endif

#if 0
int main() {
	/*입력 값이 10보다 크면 ‘bye’를 출력,
	  입력 값이 0보다 작으면 ‘hello’를 출력

	  주의) 0 <= x <= 10인 경우에는 아무 것도 출력하지 않는다. */

	int a :
	scanf("%d", &a);

	if (a > 10) {
		printf("bye");
	}
	else if (a < 0) {
		printf("hello");
	}

	return 0;
}
#endif

// if  /else if /else statement, 조건문
// 
// 조건 2개 이상과 나머지 경우를 명시할 때 사용.
// 조건이 참(true)이 되는 경우에 해당하는 if 또는 else if를 수행.
//     -else if 는 여러 개가 가능
// 해당되는 경우가 없을 때는 else 해당하는 부분을 수행
#if 0
int main() {
	/*예제. 입력 값이 1 <= x <= 10 이면 1을 출력
					  11 <= x <= 20 이면 2를 출력
					  나머지는 3을 출력 */

	int a;
	scanf("%d", &a);

	if ((a >= 1) && (a <= 10)) {
		printf("1");
	}
	else if ((a >= 11) && (a <= 20)) {
		printf("2");
	}
	else {
		printf("3");
	}

	return 0;
}
#endif

#if 0
int main() {
	/*입력 값이 5로 나누어지면 ‘five’를 출력
			 6으로 나누어지면 ‘six’를 출력,
			 5와 6 모두로 나누어지면, ‘fsix’를 출력,
			 나머지 경우는 ‘none’을 출력
	  if, else if, else 순서에 주의! */

	int a;
	scanf("%d", &a);

	if (((a % 5) == 0) && ((a % 6) == 0)) {  // if else if 중에서 위에서부터 만족하는 하나만 실행
		printf("fsix");
	}
	else if ((a % 5) == 0) {
		printf("five");
	}
	else if ((a % 6) == 0) {
		printf("six");
	}
	else {
		printf("none")
	}

	return 0;
}
#endif

// Nested if 조건문
//
// 조건문 안에 조건문을 포함.
// 포함된 조건과 && (AND) 효과
#if 0
int main() {
	// 예제. 입력 값이 1 <= x <= 10 이면 1을 출력

	int a;
	scanf("%d", &a);

	if (a >= 1) {
		if (a <= 10) {  // Nested if문을 쓰는 이유: 코드 가독성, 이해도, 한번에 쓰면 너무 길어질 수 있음
			printf("1");
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	/*입력 값이 홀수이면서
	  100 <= x <= 200 이면 1을 출력
	  Nested if문으로 작성해 보세요.*/

	int a;
	scanf("%d", &a);

	if ((a % 2) == 1) {
		if ((a >= 100) && (a <= 200)) {
			printf("1");
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	/*입력 값이 짝수 이면서
	끝자리가 2이면 ‘a’를 출력
			 4이면 ‘b’를 출력,
			 8이면 ‘c’를 출력
			 나머지는 ‘f’를 출력 */

	int a;
	scanf("%d", &a);

	if ((a % 2) == 0) {
		if ((a % 10) == 2) {
			printf("a");
		}
		else if ((a % 10) == 4) {
			printf("b");
		}
		else if ((a % 10) == 8) {
			printf("c");
		}
		else {
			printf("f");
		}
	}

	return 0;
}
#endif

// Switch문
//
// 값에 따른 조건적 실행을 간편하게 구현
// if / else if / else로도 구현 가능하지만,
// 가독성 측면에서 switch를 사용
//
// 주의
// switch로 구현-- > if문으로 구현 가능하지만,
// if 문 구현-- > switch 불가능할 수도
#if 0
int main() {

	int a;
	scanf("%d", &a);

	switch (a) {  // 선택 근거가 되는 변수 (int, char 등만 가능, 실수형 불가능)
	case 0:  // 값을 case로 기재
		printf("0");
		break;  // case의 끝은 break
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:  // default는 나머지  // 생략가능 --> 나머지 경우에 대해서 미처리
		printf("else");
		break;
	}

	return 0;
}
#endif

// Switch문에서 break의 중요성
#if 0
int main() {

	int a;
	scanf("%d", &a);

	switch (a) {  // break가 없는 경우 --> 해당 case에서 밑으로 계속 실행 (break까지, switch문이 끝날 때까지)
	case 0:			   // 0 입력 --> 0, 1, 2, else 출력  
		printf("0");   // 2 입력 --> 2, else 출력

	case 1:
		printf("1");

	case 2:
		printf("2");

	default:
		printf("else");

	}

	return 0;
}
#endif

// Switch문의 주의사항
//
// 선택 변수의 type의 정수와 char형만 사용 가능
//	   실수, 문자열은 안됨
//
// if문의 범위 조건은 switch 문으로 표현 불가능
//	   if (a > 100000000) { ….. }
//	   switch 문으로 할 수는 있지만, case 지정하다가 인생 끝.
#if 0
int main() {
	/*수식 입력
		2 + 3
		10 - 4
	연산자 (op) 따른 계산
		결과 출력
	default 없음
	break문 위치에 주의 */
	int x, y;
	char op;
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		printf("%d\n", x + y);
		break;
	case '-':
		printf("%d\n", x - y);
		break;
	case '*':
		printf("%d\n", x * y);
		break;
	case '/':
		printf("%d\n", x / y);
		break;
	}

	return 0;
}
#endif

#if 0
int main() {
	// 1313: 셋 중 같은 숫자가 2개?

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if ((a == b) || (a == c)) {
		printf("%d", a);
	}
	else if (b == c) {
		printf("%d", b);
	}
	else {
		printf("0");
	}

	return 0;
}
#endif

#if 0
int main() {
	// 1314: 시급계산기

	int a;
	int b = 7530;
	scanf("%d", &a);

	printf("%d", a * b);

	return 0;
}
#endif

#if 0
int main() {
	// 1315: 시급에 보너스까지

	int ph = 0;
	int wh = 0;
	int b = 0;

	scanf("%d", &wh);

	b = wh / 8 * 1000;

	ph = wh * 7530 + b;
	printf("%d", ph);

	return 0;
}
#endif

#if 0
int main() {
	// 1316: 숫자 분류

	int a;
	scanf("%d", &a);

	if ((a % 2) == 1) {
		if (((a % 5) == 0) && ((a % 7) == 0)) {
			printf("0");
		}
		else if ((a % 5) == 0) {
			printf("1");
		}
		else if ((a % 7) == 0) {
			printf("2");
		}
		else {
			printf("3");
		}
	}
	else {
		if (((a % 5) == 0) && ((a % 7) == 0)) {
			printf("10");
		}
		else if ((a % 5) == 0) {
			printf("11");
		}
		else if ((a % 7) == 0) {
			printf("12");
		}
		else {
			printf("13");
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	// 1638: [C언어 - 2023] Swtich문 연습

	int a;
	scanf("%d", &a);

	switch (a) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31");
		break;
	case 4: case 6: case 9: case 11:
		printf("30");
		break;
	default:
		printf("28");
	}

	return 0;
}
#endif