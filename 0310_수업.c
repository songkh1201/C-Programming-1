#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {

	// ������ ����
	// int, integer --> data type (��������)
	// C laguage - strictly typed laguage

	int x;
	int y;
	int sum;  // x�� y�� ���� ����
	//int x, y, sum;  // p.98

	// ������ ���Ǳ� ���� ����Ǿ�� �Ѵ�  p.97
	// ����ϱ� �� � Ÿ���� �������� �����ؾ� ��

	return 0;
}

int main(void) {

	// p.98 ������ �̸�����

	// 1. ����
	//   �̸����ڴ� ����, ������, ���ٹ��� (_, underscore)
	//   �߰� ���� �ȵ�  --> good name
	//   �̸� ù���ڴ� ������ �Ǵ� _ -->  123name(x), name123(o)
	//   ��ҹ��� ������  myname Myname
	//   �����̸� �ȵ�    (p.99) main, int
	//   �̸��� �󸶳� �� �� �ֳ���?   63����   (p.100)

	// 2. �ǹ�
	//   ���� ���� �̸�  (p.100)
	//   sum

	// ������ �ʱ�ȭ (variable initialization)   (p.100)

	int x = 10;
	int y = 20;
	int sum = 0;

	int x;  // garbage value (�����Ⱚ)

	int x = 10, y = 20;


	// p.101
	int x, y = 100;  // x�� �ʱ�ȭ, y�� �����Ⱚ


	// p.101 3.6 ���İ� ����

	//p.102 �������, +,-,*,/,%
	int x = 0;
	int y = 0;
	int res = 0;

	res = x + y;
	res = x - y;
	res = x * y;
	res = x / y;   // int variable�� ���ؼ��� ���� 3/2 = 1
	res = x % y;   // modulo, ���� ������ 5 % 7 = 5, 12 % 7 = 5


	return 0;
}

int main(void) {

	// p.104 - printf
	printf("hello world\n");   // string(���ڿ�) ���

	// p. 105,  variable value ���
	int x = 10;
	int y = 20;

	printf("%d\n", x);   // d == decimal(������)
	printf("x value is %d\n", x);
	printf("x y values are %d %d\n", x, y);   // variable 2�� ���

	float z = 3.14;
	printf("z value is %f\n", z);   // f��  �Ǽ���

	// printf : f== formatted

	int a = 123;
	printf("a value is <%d>\n", a);   // a value is <123>
	printf("a value is <%10d>\n", a);   // a value is <       123>
	printf("a value is <%-10d>\n", a);   // a value is <123       >

	// p.106 : �ʵ���(width)�� ���е�(precision)
	// %10.3f : 10==width, 3==precision
	float b = 1.23456789;
	printf("b value is %f\n", b);   // b value is 1.2345678
	printf("b value is %10.3f\n", b);   // b value is      1.235
	printf("b value is %-10.3f\n", b);   // b value is 1.235     
	printf("b value is %.3f\n", b);   // b value is 1.235 

	return 0;
}

int main(void) {

	// p,108, 3.8 scanf : scan-formatted, Ű���带 ���� ���� �Է�

	int x;
	scanf("%d", &x);  // _CRT_SECURE_NO_WARNINGS (����)
	printf("x value is %d\n", x);

	// p.109, �Ǽ��� �Է¹޴� scanf
	float a = 0.0;
	scanf("%f", &a);
	printf("�Է��� �Ǽ��� %f\n", a);

	return 0;
}

int main(void) {

	// p. 111, ���� ���α׷� #2
	// 2���� ������ �Է¹޾�, �� ���� ����ϴ� ���α׷�
	// p.112 �ϴܿ� �ҽ��ڵ�
	int a1 = 0;   // ù��° �Էµ� ����
	int a2 = 0;   // �ι�° �Էµ� ����
	int sum = 0;   // ���� �����ϴ� ����

	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf("%d", &a1);

	printf("�ι�° ���ڸ� �Է��ϼ���:");
	scanf("%d", &a2);

	sum = a1 + a2;
	printf("����� ���ߴ� ���� %d\n", sum);

	return 0;
}


#if 0



#endif