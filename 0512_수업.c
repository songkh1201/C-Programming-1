#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// ������
//	�������� (data type) ���� �ϳ�
//		int float ��� ����
//	���������� ����: a variable of pointer type
//		int���� ����
//		float���� ����
// ������ ���� == ������ �������� ����
// ������ ������ �����ϴ� ���� '�ּ�' 
//	�ּ� : �����Ͱ� ����� ��ġ

// �ּҿ�����
//	������ ��ġ�� ���� �����ּҸ� ��ȯ�ϴ� ������
//	�����̸� �տ� �ٿ��� ���: &a
#if 0
int main() {
	int a = 10;
	char b = 20;
	float c = 30;

	// %p�� �ּҸ� 16������ ���
	printf("%p\n%p\n%p", &a, &b, &c);

	return 0;
}
#endif

// ���������� ���� ���� (�����ͺ���==������ ����)
//	data-type * �����̸�
//  ��) int* a
// �����Ϳ� data type (int, char��)�� ���̴� ����
//
// -������ ������ �̿��Ͽ� �ּ���ġ�� read / write
//
// - data type�� read / write�ϴ� ����
//
// ��) int* a;   �����ͺ��� a�� �̿��ϸ� 4 bytes(int)
//               ������ read / write�� ����

#if 0
int main() {
	int* a;
	char* b;
	float* c;
	double* d;
	short* e;

	return 0;
}
#endif

#if 0
int main() {
	// �ּ� 1000������ ����
	// (int *)�� ���� 1000�� �ּ� 1000���� ����
	int* a = (int*)1000;

	// ������ ���� pd�� ����Ǿ� �ִ� �ּҴ�
	// int ���� b�� �ּ�
	int b = 20;
	int* pd = &b;

	// �Ϲ����� ������ ���� �ʱ�ȭ
	// 0������ invalid address��,
	// ������ ������ ��ȿ�� �ּҰ� ������� �ʾ����� �ǹ�
	char* pc = 0;

	// NULL == 0
	float* pf = NULL;

	return 0;
}
#endif

// �������� ������ *: dereferencing operator
// �����ͺ����� dereferencing �̶� ?
//
//	������ ������ ����Ǿ� �ִ� �ּҿ� ���ؼ� read / write�ϴ� ����
//
//	���� ���, ������ ������ 1000�� ����Ǿ� �ִٸ�,
//	dereferencing�� �ּ� 1000������ read / write�ϴ� ���̴�.
//
//	int a = 10; // ���� a�� 1000������ �ִٰ� ����
//	int* pa = &a;  // ������ ���� pa�� 1000�� �����Ѵ�.
//
//	���� pa�� ����� ��(�ּ� 1000)�� �̿��ؼ� 1000����(���� a�� ��ġ)��
//	read / write �� �� �ִ�.
//
//	�̷��� ������ dereferencing,
//
//	�׸��� ���⿡ ���Ǵ� dereferencing operator *
//
//	** dereferencing operator *�� ������ ���� �տ� �ٿ��� ���
//
//	��Ȳ�� ���� read / write ��� ����
#if 0
int main() {
	int a = 10;
	int* pa = &a;

	printf("���� a�� ����ִ� ��: %d\n", a);
	printf("���� a�� �޸𸮻��� ��ġ: %p\n", &a);
	printf("�����ͺ��� pa�� ����ִ� ��: %p\n", pa);

	// �����ͺ����� �����̹Ƿ�, ���� �����ϱ� ���ؼ�
	// �޸𸮿� ���� ���� (��ġ, �ּ�)�� ������ �־�� �Ѵ�.
	printf("�����ͺ��� pa�� �޸𸮻��� ��ġ: %p\n", &pa);

	// ���� �����ͺ��� pa�� dereferencing operator *�� �̿��ؼ�
	// pa�� �����ϰ� �ִ� ���� a�� �ּҿ� ���ؼ�
	// read�� write�� ����

	// dereferencing pa for read
	printf("%d\n", *pa);  // ���⼭ *�� read

	// dereferencing pa for write
	*pa = 555;  // ���⼭ *�� write

	// ���� a���� ����Ǿ� �ִ�.
	printf("dereferencing������ a��: %d\n", a);
	return 0;
}
#endif

// ��� ����: &�� *
/*
&
address operator
������ �ּҸ� ��ȯ
���� �տ� ���δ� : &a
������ ���� �տ� ���̸�, ������ ������ �޸� ���� ��ġ
*/

/*
*
dereferencing operator
������ ���� �տ� ���δ�.
������ ������ ������ �ִ� ��(�ּ�, ��ġ)�� ���ؼ� read/write
��Ȳ�� ���� read �Ǵ� write
*/


// ������ ���� ���� ������
//
// �ʱ�ȭ���� �ʰ� ����ϱ�
//		������ ������ �ʱ�ȭ���� ������, garbage value
//		dereferencing�ϰ� �Ǹ�, garbage value�� �ּҷ� �ν��ؼ� �װ��� read / write
//
// NULL(== 0) ���� ������ ������ ���� ���
//		int* pa = 0;
//		�ּ� 0������ invalid address : �� �� ��Ȯ���� ���ٱ��� ����
//		���� �̰��� dereferencing�ϸ� program error �߻�
//		NULL�� �����ͺ����� ���� ��ȿ���� �Ǵ��ϴ� �������� ���
//
// ������ Ÿ�԰� ���� Ÿ���� ������ ��ġ
//		int a;
//		double* pa = &a;
//
//		���� a�� ������ ������ 4 byte�ε�,
//		������ ���� pa�� �̿��ؼ� dereferencing�ϴ� ���� double = 8bytes
//		����, �������� ���� ������ ����ؼ� ������ ���ظ� �� �� �ִ�.
//		** �׷�����, �̸� �������� �ʱ⿡, �������� ������ å��


// ������ ����
//  ������ ������ ������ ������ ������ ����
//  ������ ������ ��, �� ���� / ���Һ��� ������ ���������� ���� �޶���
#if 0
int main() {
	char* a = (char*)10000;
	short* b = (short*)10000;
	int* c = (int*)10000;
	double* d = (double*)10000;

	// %u�� 10������ �ּҸ� ����Ѵ�. (%p�� 16������ �ּҸ� ����Ѵ�.)
	printf(" a: %u\n b: %u\n c: %u\n d: %u\n\n", a, b, c, d);

	a++;  // char = 1 byte�̹Ƿ�, ���д����� 1
	b++;  // short = 2 byte�̹Ƿ�, ���д����� 2
	c++;  // int = 4 byte�̹Ƿ�, ���д����� 4
	d++;  // double = 8 byte�̹Ƿ�, ���д����� 8

	printf("1�� ������Ų ����\n\n");
	printf(" a: %u\n b: %u\n c: %u\n d: %u\n\n", a, b, c, d);
	return 0;
}
#endif

#if 0
int main() {

	int a = 3000;
	int* pa = &a;

	printf("pa: %u\n", pa);

	// dereferencing���� *pa�� read �Ŀ�,
	// pa���� ���� ( +4)

	int k = *pa++;
	// ����, ������ ���� �ϴ� ���� ����
	// int k = *pa
	// pa++

	printf("k: %d\n", k);
	printf("pa: %u\n", pa);

	return 0;
}
#endif

#if 0
int main() {

	int a = 3000;
	int* pa = &a;

	printf("a: %d\n", a);

	// dedreferecing���� ���� �����ͼ�(read)
	// �� ���� 1��ŭ �������Ѽ�, �ٽ� write
	(*pa)++;
	//
	//����
	// int temp = *pa;  // read
	// temp++;
	// *pa = temp;      // write

	printf("a: %d\n", a);

	return 0;
}
#endif

#if 0
int main() {

	double d = 1000;

	// pa�� �̿��ؼ��� 8����Ʈ�� read/write
	double* pa = &d;

	// pi�� pa���� ���� �� ����ȯ
	// pi�� pa ��� ������ ��������, ���� read/write������ 4����Ʈ�� 8����Ʈ�� �޶�
	// ����ȯ����� �Ѵ�.
	//
	// pi�� �̿��ؼ��� 4����Ʈ�� read/write
	int* pi = (int*)pa;

	return 0;
}
#endif

// �����Ϳ� �Լ� parameter: call by value
// call-by-value: �Լ� parameter�� �ѱ� �� ���� ���纻�� ����
//		�Լ� ������ ���� �ٲ�, ������ �������
#if 0
void foo(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {

	int k1 = 10;
	int k2 = 20;

	printf("k1: %d		k2: %d\n", k1, k2);
	foo(k1, k2);
	printf("After calling foo\n");
	printf("k1: %d		k2: %d\n", k1, k2);

	return 0;
}
#endif

// �����Ϳ� �Լ� parameter: call by reference
// call-by-reference: �Լ� parameter�� �ѱ� �� ���� ���� �ּҰ� ����
//		�Լ� ������ ������ �ּҸ� �̿��ؼ� ���� �ٲٸ�, ������ �ٲ�
#if 0
void foo(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int k1 = 10;
	int k2 = 20;

	printf("k1: %d		k2: %d\n", k1, k2);
	foo(&k1, &k2);
	printf("After calling foo\n");
	printf("k1: %d		k2: %d\n", k1, k2);

	return 0;
}
#endif

// scanf�� address operator
//  scanf �Լ��� ���� ����� ���� �ּҸ� ���ڷ� �޾ƾ� ��.
//  �̸� ����, ���� �տ�& (address operator)�� �ٿ���.



// �ּҸ� ��ȯ�ϱ� ������ �Լ���ȯ������
// ���������� ���
#if 0
int* foo(int k) {

	int result = k;

	result = result * 10;

	// �Լ��� ����Ǹ�,
	// local variable result�� ������� �ǹǷ�,
	// �ּҰ��� �ǹ̰� ����
	return &result;
}
int main() {

	int a = 20;

	// ��ȯ�Ǵ� �ּҸ� p�� ����������,
	// �� �ּҿ� �ִ� local variable result�� �Լ� ����� �Բ� �Ҹ�
	// �� �ּҸ� ���� ���� ������, ��ȿ�� ���� �������� ������.
	int* p = foo(a);

	return 0;
}
#endif

// �����Ϳ� �迭
// �迭�� �̸��� ������ ����
// int a[10];
// �� ���, �迭�̸� a�� ������ ����,
// a���� �迭�� �����ּҰ� ��� ����.
// a�� ���������� int* (int ������ read / write�ϴ� ������ ����)
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	// a�� int* Ÿ���̹Ƿ�, 4����Ʈ�� �д´�.
	printf("%d\n", *a);        // a[0]

	printf("%d\n", *(a + 1));  // ������ �������꿡 ���� a[1] access

	printf("%d\n", *(a + 4));  // a[4]

	return 0;
}
#endif


// �迭�� �̸��� ������ �����̱� ������, 
// const�̱� ������, ���� �����ų ���� ����,
// a + 1 �� ����, offset������� �迭 ��Ҹ� read / write ����
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	// �迭 �̸� a�� ������ �����ε�,
	// constant (read-only)�̹Ƿ� a�� ����� �� ��ü�� �ٲ� ���� ����.
	a++;

	return 0;
}
#endif


// �����͸� �迭�̸�ó�� ���
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	int* p = a;
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// �����ͺ��� p�� ��ġ �迭�̸�ó�� ���
	// indexing�� �����ϴ�.
	p[0] = p[0] * 2;
	p[4] = p[4] * 2;

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
#endif



// �迭�� �Լ��Ű������� ����
#if 1
// �迭�� �Լ� parameter�� ���޵� ���� call-by-reference
//			������ ����
//
// �Լ� parameter�μ��� �迭�� 2���� ��� ����
//			�迭�� ���� : �Լ� foo
//			������ ������ ���� : �Լ� bar
//
// �迭�� �����Ϳ� ȥ��Ǿ� ���� ���ȴ�.
//
// �迭�� ũ�Ⱑ Ŭ ���� �ֱ� ������ ������ �����ּҸ� �ѱ��!!!
//			�迭�� call - by - reference�� �� ����
void foo(int k[]) {
	k[0] = k[0] * 2;
	k[4] = k[4] * 2;
	return;
}
void bar(int* k) {
	k[1] = k[1] * 2;
	*(k + 3) = *(k + 3) * 2;  // ������ ������ �̿�
	return;
}
int main() {

	int a[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	foo(a);
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	bar(a);
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
#endif

// ������ ����� ����
// ������ ����� ��Ʊ� ������, 
// ������ ���� ���� ������ ���
//
// �پ��� �ڷ����� ���� ǥ�� ����
//
// �ϵ��� �޸𸮿� mapping�� ���� ���� : embedded programming
//
// call - by - reference ȣ�� : ���� ���޷� �Լ� ȣ�� ȿ���� ����
//
// ���� �޸� �Ҵ�
//		�ʿ��� ��ŭ �Ҵ�,
//		��� �� ����
//		* �迭�� �����Ҵ�


#if 0
int main() {


	return 0;
}
#endif
