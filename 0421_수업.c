#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>       // header���� ���ռ�
#include<limits.h>
#include<float.h>

// �Լ�, function
// ���ȭ�� ���α׷����� �� �� �ִ� ���
// 'Ư�� ����� �����ϴ� ��ǰ' �̶�� ����


void abc(void) {              // header    // ������� ������ �Լ� �տ� void,    ()�ȿ��� �Է¹޴� ������ Ÿ��, void�� �Է� ����
	printf("hello\n");        // body
	return;             // �Լ� ����(�Լ� ��)                              // ��ü ������ �Լ��� �����Ѵٰ� ��
}

#if 0
int main() {      // main�� c���� ���� �߿��� �Լ��� ������ ����
	abc();              // �Լ� ȣ��   // ()�ȿ��� �Է¹޴� ��, �Է��� ������ ()
	return 0;           // �Լ��� 'ȣ��'�Ǵ� �������� ������ ��������� �Ѵ�
}                 // main �Լ��� ������ ������ integer�� 0�� ����
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

void foo(int a) {               // ()���� parameter ��� ��, parameter�� �������� �� ����
	printf("hello %d\n", a);
	return;
}

#if 0
int main() {
	foo(100);                   // () �ȿ� ���� argument ��� �� argument�� parameter�� ����
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
	return 25;    // ��ȯ���� �ݵ�� 1���̴�
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
// ���ĺ� �ҹ��ڸ� �μ��� �޾�, �빮�ڷ� �����ִ� �Լ� foo
//
// a ~ z    97 ~ 122
// A ~ Z    65 ~ 90
char foo6(char c) {

	char d = c - ('a' - 'A');
	return;
}
int main() {
	printf("��ȯ %c\n", foo6('g'));

	return 0;
}
#endif

#if 0
// ���ĺ� ���ڸ� �μ��� �޾�,
// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ��ȯ�ϴ�
// �Լ� bar
char bar(char c) {

	// �Ǻ�
	if (c >= 'a' && c <= 'z') {
		// �ҹ���
		return (c - ('a' - 'A'));
	}
	else if (c >= 'A' && c <= 'Z') {
		// �빮��
		return (c + ('a' - 'A'));
	}
}
int main() {
	char k;
	scanf("%c", &k);
	printf("��ȯ %c\n", bar(k));
	return 0;
}
#endif


// �Լ� ���� (Function Prototype)
// �Լ�����(definition) �Ŀ� �Լ� ȣ��(call)�� ����
//
// Function prototype :
// �Լ� body����,
// �Լ� header �κи� �ִ� ���
// Function prototype�� '������ ȣ��'�� ������ ��
//
// Function prototype ����� �ʼ��� ���
// �Լ� do_some_work_1() �Լ� do_some_work_2()��
// ���ΰ� ȣ��
// ����,
// �� �Լ��� prototype�� �� ���� �����ؾ� �Ѵ�.


#include <stdlib.h>
// ǥ�� ���̺귯�� �Լ�: rand
// ? C��� ���� �Լ�
// ? #include <stdlib.h>
// ? rand() : 0 ~32767 ���� �� 1���� ���Ƿ� �߻�
// ? srand(int) :
//	? random number generator seed value ����
//	? seed value�� ���� ���� �߻� ��ȭ
//	? #include <time.h>
//	? srand((unsigned)time(0));   // ���� �ð��� seed value�� ����
//                                // ������ �� ���� �ٸ� seed value ȿ��
#include <stdlib.h>
// library : �Լ����� ����
#include <time.h>
#if 0
int main() {
	printf("%d\n", rand());    // ��� ���� ���ڸ� �����

	srand(100);   // seed ���� �ٲ������
	printf("%d\n", rand());

	srand(time(0));
	printf("%d\n", rand()); // seed���� ��� �ٲ���� �ϱ� ������ ���� �ð��� seed������ ���

	return 0;
}
#endif

#if 0
int main() {
	// �ζǹ�ȣ
	srand(time(0));
	for (int i = 1; i <= 6; i++) {
		printf("%d\n", rand() % 45);
	}
	return 0;
}
#endif

// ǥ�� ���̺귯�� �Լ�: math.h
// ? #include <math.h>
// ? floor(2.31) = 2.0
// ? ceil(2.31) = 3.0
// ? fabs(-2.31) = 2.31
// ? pow(10.0, 3.0) = 1000.0
// ? sqrt(16.0) = 4.0
// ? sin(x) : x is radian, 1 radian = 180 / pi
//    ? sin(pi / 2) = 1.0




// �������� -- grobal variable
// �������� -- local variable
#if 0

int k = 20;  // ��������   ����� ���Ŀ� �ִ� ��� �Լ��� ���ؼ� ��� ����

int foo7(int a) {    // () �ȿ� ���� -- ��������
	return a + k;
}

int main() {

	int a = 10;          // ��������     �Լ��� ������ ������, �Լ��ȿ����� �ǹ� ����
	int y = foo7(a);     // ��������
	return 0;
}
#endif

#if 0

// ���� �̸��� �浹

int a = 20;

int foo7(int a) {          // ���������� ������������ �켱,  �Լ� �� �̹Ƿ� ���������� ���� �� ����    
	return a + 10;         // ������ �浹 ��ü�� �ϸ� �ȵ�
}

int main() {

	int a = 10;
	int y = foo7(a);
	return 0;
}
#endif

// 1���� ū ���� ���� 1���� �μ��� �޾�,
// �Ҽ��� 1, �ƴϸ� 0�� ��ȯ�ϴ� �Լ� isPrime
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

#if 1                                                      // ���� 1�� ���� 11111111111111111111111111111111111111111
// 1���� ū ���� ���� 1���� �μ��� �޾�,
// �� �μ����� �۰ų� ���� �Ҽ��� ������ ��ȯ�ϴ�
// �Լ� cntPrime
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
