
// chap. 4 ������ �ڷ���

// �ڷ��� (data type)
// ��� ������ �ڷ����� ���´�.
// ����, ����, �Ǽ� <--- ��ǥ���� �ڷ��� 3����

// ����
// �� �ڷ����� ���̴� �����ϴ� ����
// ������ ũ�� ���̴� ������ �� �ִ� ������ ������ ���̰� �ȴ�
// int			: 4 byte	-- -20�� ~ 20��
// short		: 2 byte	-- -3�� ~ 3��
// long			: 4 byte
// long long	: 8 byte	-- �ξ� �� ū ����

// sizeof ������ : data type�� �����ϴ� ������ ũ�⸦ byte������ �˷��ִ� ������.


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


#if 0
int main() {

	printf("int %d \n", sizeof(int));  // <--- int���� �����ϴ� ����

	return 0;
}
#endif

// ������ Ÿ�� ũ��� ǥ�������� ������ ����

// 1 byte = 8 bit
// 1 byte --> 1024 (== 2^10) --> 1 Kbyte --> 1 MB --> 1 GB --> 1 TB

// ����, � ������ ��Ÿ���� ������ Ÿ���� 1 byte���,
// ǥ�������� ���� ������?
//
// 2�� bit�� ������,	00, 01, 10, 11		(2^2)
//						 0   1   2   3		(0 ~ 2^2-1)		--> 4���� ���� ǥ�� ����
//						 0   1  -2  -1		(2^(2-1) ~ 2^(2-1)-1)
// 3�� bit�� ������,    000, 001, .... , 111	(2^3)
//						8��
//						0, 1, 2, 3, 4, 5, 6, 7		(0 ~ 2^3-1)
//						-4, -3, -2, -1, 0, 1, 2, 3		(-2^(3-1) ~ 2^(3-1)-1
// 4�� bit�� ������,    0000, 0001, ....., 1111		(2^4)
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

	printf("%d\n", INT_MAX);  // int���� ��Ÿ�� �� �ִ� �ִ� �����

	return 0;
}
#endif

// 2�� ����, 2's complement  <---- ������ ��Ÿ���� ���
//
// 3 bit�� ��Ÿ�� �� �ִ� ��� ����
//		000, 001, 010, 100, 011, 101, 110, 111
//		 0	  1	   2    3    4    5    6    7
//		 
//		������ ���� �� ���, ��� ����
//		�� ���� ��Ʈ�� ��ȣ��Ʈ�� ���� - 0 : ���, 1 : ����
//		000, 001, 010, 011 <--- ���
//		 0    1    2    3
//		100, 101, 110, 111 <--- ����
//		 -0   -1   -2   -3
//
//		�� ����� �������� 0�� �ΰ���� ��.
//
//		2�� ������ �̿��� ���� ǥ��ü��,,, ���� 0�� ������.
//
//		��� <--> ����
//			��Ʈ�� ��� toggle (on-> off, off-> on)
//			+1
//
//		��� 1 --> 001 (������)
//		2�� ������ �̿��ؼ� ���� -1�� ����� ����
//		001 -- toggle --> 110 -- +1 --> 111 (���� -1)
//	-1	111 -- toggle --> 000 -- +1 --> 001
//
//		���� 0�� ���ֹ�����
//		000 (���� 0) --> 111 --> 000
//
//		�Ʊ� ���� 0�̾��� 100�� ����ü ���� ����?
//			�̰� �˷��� 2�� ����ü�迡 ���� ����� �ٲ㺸�� �ȴ�
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

// �Ǽ���,

// floating point number (�ε��Ҽ�����) <--- �̸��� ������ �˾ƺ���

// ���� ������, fixed point number (�����Ҽ�����)
//    �Ҽ����� ���� ���ڸ� ǥ���ϴ� ���

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

// p.147��
#if 0
int main() {

	float a = 0.1;

	printf("%.20f\n", a);

	return 0;
}
#endif

// p.148 �ε��Ҽ������� ����� ���, ������ ��
#if 0
int main() {

	double d;

	d = (1.0e20 + 5.0) - 1.0e20;

	printf("%f \n", d);

	return 0;
}
#endif

// p. 149 ������

// char

// ASCII code ---> ������ �й�
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

// 5��

#if 0
int main() {

	// ��� ������ ---> binary operator
	// +, -, *, /, %
	int a;

	a = a + 3;
	a = a - 20;
	a = a * 10;
	a = a / 1;
	a = a % 3;

	// p.171
	// ��ȣ ������
	a = -10;  // -1�� ���ϴ� ȿ�� --> unary operator
	a = -a;

	// p.171 ����������
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
