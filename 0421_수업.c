#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>       // header들의 집합소
#include<limits.h>
#include<float.h>

// 함수, function
// 모듈화된 프로그래밍을 할 수 있는 방법
// '특정 기능을 수행하는 부품' 이라고 생각


void abc(void) {              // header    // 결과물이 없으면 함수 앞에 void,    ()안에는 입력받는 데이터 타입, void는 입력 없음
	printf("hello\n");        // body
	return;             // 함수 종료(함수 끝)                              // 전체 과정을 함수를 정의한다고 함
}

#if 0
int main() {      // main은 c언어에서 가장 중요한 함수로 정해져 있음
	abc();              // 함수 호출   // ()안에는 입력받는 수, 입력이 없으면 ()
	return 0;           // 함수는 '호출'되는 시점보다 위에서 만들어져야 한다
}                 // main 함수는 실행이 끝나면 integer에 0이 남음
#endif

#if 0
int main() {
	abc();
	abc();
	return 0;
}
#endif

void bcd() {
	printf("bye\n");
	return;
}

#if 0
int main() {
	for (int n = 1; n <= 3; n++) {
		bcd();
	}
	return 0;
}
#endif

void foo(int a) {               // ()안을 parameter 라고 함, parameter는 여러개일 수 있음
	printf("hello %d\n", a);
	return;
}

#if 0
int main() {
	foo(100);                   // () 안에 값을 argument 라고 함 argument를 parameter로 보냄
	return 0;
}
#endif

#if 0
int main() {
	for (int i = 1; i <= 10; i++) {
		foo(i);
	}
	return 0;
}
#endif

#if 0
int main() {
	foo(10 - 5);

	return 0;
}
#endif

void mysum(int a, int b) {
	printf("sum is %d\n", a + b);
}

#if 0
int main() {
	mysum(30, 50);

	return 0;
}
#endif

int foo2() {
	return 25;    // 반환값은 반드시 1개이다
}

#if 0
int main() {
	int k;
	k = foo2();
	return 0;
}
#endif

char foo3() {
	return 'k';
}

float foo4() {
	return 3.14;
}


int foo5(int a) {
	return a + 10;
}

#if 0
int main() {
	int k;
	k = foo5(30);
	printf("%d\n", k);
	return 0;
}
#endif

#if 0
// 알파벳 소문자를 인수로 받아, 대문자로 돌려주는 함수 foo
//
// a ~ z    97 ~ 122
// A ~ Z    65 ~ 90
char foo6(char c) {

	char d = c - ('a' - 'A');
	return;
}
int main() {
	printf("변환 %c\n", foo6('g'));

	return 0;
}
#endif

#if 0
// 알파벳 문자를 인수로 받아,
// 대문자는 소문자로, 소문자는 대문자로 전환하여 반환하는
// 함수 bar
char bar(char c) {

	// 판별
	if (c >= 'a' && c <= 'z') {
		// 소문자
		return (c - ('a' - 'A'));
	}
	else if (c >= 'A' && c <= 'Z') {
		// 대문자
		return (c + ('a' - 'A'));
	}
}
int main() {
	char k;
	scanf("%c", &k);
	printf("변환 %c\n", bar(k));
	return 0;
}
#endif


// 함수 원형 (Function Prototype)
// 함수정의(definition) 후에 함수 호출(call)이 가능
//
// Function prototype :
// 함수 body없이,
// 함수 header 부분만 있는 경우
// Function prototype은 '선언전 호출'을 가능케 함
//
// Function prototype 사용이 필수인 경우
// 함수 do_some_work_1() 함수 do_some_work_2()는
// 서로간 호출
// 따라서,
// 두 함수의 prototype을 맨 위에 선언해야 한다.


#include <stdlib.h>
// 표준 라이브러리 함수: rand
// ? C언어 내장 함수
// ? #include <stdlib.h>
// ? rand() : 0 ~32767 정수 중 1개를 임의로 발생
// ? srand(int) :
//	? random number generator seed value 설정
//	? seed value에 따라서 난수 발생 변화
//	? #include <time.h>
//	? srand((unsigned)time(0));   // 현재 시간을 seed value로 제공
//                                // 실행할 때 마다 다른 seed value 효과
#include <stdlib.h>
// library : 함수들의 집합
#include <time.h>
#if 0
int main() {
	printf("%d\n", rand());    // 계속 같은 숫자만 출력함

	srand(100);   // seed 값을 바꿔줘야함
	printf("%d\n", rand());

	srand(time(0));
	printf("%d\n", rand()); // seed값을 계속 바꿔줘야 하기 때문에 현재 시간을 seed값으로 사용

	return 0;
}
#endif

#if 0
int main() {
	// 로또번호
	srand(time(0));
	for (int i = 1; i <= 6; i++) {
		printf("%d\n", rand() % 45);
	}
	return 0;
}
#endif

// 표준 라이브러리 함수: math.h
// ? #include <math.h>
// ? floor(2.31) = 2.0
// ? ceil(2.31) = 3.0
// ? fabs(-2.31) = 2.31
// ? pow(10.0, 3.0) = 1000.0
// ? sqrt(16.0) = 4.0
// ? sin(x) : x is radian, 1 radian = 180 / pi
//    ? sin(pi / 2) = 1.0




// 전역변수 -- grobal variable
// 지역변수 -- local variable
#if 0

int k = 20;  // 전역변수   선언된 이후에 있는 모든 함수에 대해서 사용 가능

int foo7(int a) {    // () 안에 변수 -- 지역변수
	return a + k;
}

int main() {

	int a = 10;          // 지역변수     함수가 끝나면 없어짐, 함수안에서만 의미 있음
	int y = foo7(a);     // 지역변수
	return 0;
}
#endif

#if 0

// 변수 이름의 충돌

int a = 20;

int foo7(int a) {          // 지역변수가 전역변수보다 우선,  함수 안 이므로 지역변수의 힘이 더 강함    
	return a + 10;         // 변수의 충돌 자체를 하면 안됨
}

int main() {

	int a = 10;
	int y = foo7(a);
	return 0;
}
#endif

// 1보다 큰 양의 정수 1개를 인수로 받아,
// 소수면 1, 아니면 0을 반환하는 함수 isPrime
#if 0
int isPrime(int n) {
	int a;
	int r = 0;
	if (n == 2) {
		return 1;
	}
	for (a = 2; a < n; a++) {
		if ((n % a) == 0) {
			r = 0;
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", isPrime(n));
	return 0;
}
#endif

#if 1                                                      // 시험 1번 문제 11111111111111111111111111111111111111111
// 1보다 큰 양의 정수 1개를 인수로 받아,
// 그 인수보다 작거나 같은 소수의 개수를 반환하는
// 함수 cntPrime
int cntPrime(int n) {
	int a = 0;
	int k = 0;
	int h = 0;
	int c = 0;
	for (a = 2; a <= n; a++) {
		h = 0;
		for (k = 2; k < a; k++) {
			if ((a % k) == 0) {
				h = 1;
			}
		}
		if (h == 0) {
			c++;
		}
	}
	return c;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", cntPrime(n));
	return 0;
}
#endif
