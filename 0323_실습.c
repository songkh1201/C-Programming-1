#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include <limits.h>
#include<stdio.h>


// Ch.4 ������ �ڷ���

// 4.1 ������ ���

// ������ �����ΰ�?


#if 0
int main() {

	int x = 0;
	int y = 0;

	int sum = 0;

	// ���� : x, y ,sum
	//������ �̸��� �ο��Ͽ�, �޸� ������ ���� ����

	return 0;
}
#endif

// ���� ������ ����ϴ� ���α׷�

#if 0
int main() {

	//����
	double radius; // ���� ������
	double area;   //���� ����

	printf("���� ������ �Է��Ͻÿ�");
	scanf("%lf", &radius);

	// 3.141592 �� ��� -> ��ǻ�Ͱ� ����� ���ؼ� ��� �����Ͱ� �޸𸮿� �����ؾ���
	// ���� ����� �޸𸮿� ����ȴ�. �ٸ� ������ �޸� �̸��� ����, ������ �� ����.

	//���� ������ ����� �̿��ؼ� ���
	area = 3.141592 * radius * radius;
	printf("���� ����: %f n", area);

	return 0;
}
#endif

// 4.2 �ڷ���

// �ڷ������� ������, �ε� �Ҽ�����, �������� �ִ�.

// ���������� ���� Ÿ���� �����͸� ������ �� ����
// -> short, int, long, long long ��
// �ε� �Ҽ������� �Ǽ� Ÿ���� �����͸� ������ �� ����
// -> float, double, long double ��
// �������� �ϳ��� ���ڸ� ������ �� ����
// -> char : ���������� �з��ϱ⵵ ��, ���ڰ� ���� ������ ǥ����

// �ڷ����� ũ�⸦ ����ϴ� ���α׷�

# if 0
int main() {

	int x;
	printf("���� x��           ũ��: %d\n", sizeof(x));

	printf("char			   ũ��: %d\n", sizeof(char)); //�ڷ����� ũ��
	printf("short			   ũ��: %d\n", sizeof(short));
	printf("long			   ũ��: %d\n", sizeof(long));
	printf("long long    	   ũ��: %d\n", sizeof(long long));
	printf("float			   ũ��: %d\n", sizeof(float));
	printf("double			   ũ��: %d\n", sizeof(double));

	return 0;
}
#endif

// 4.3 ������

/*
   short     -> 2byte (16bit)
   int       -> 4byte (32bit)
   long      -> 4byte (32bit)
   long long -> 8byte (64bit)
   */

#if 0

   // #include <limits.h>

   // #define PI 3.141592


int main() {

	// �����÷ο� (overflow)
	// ������ ������ ��Ÿ�� �� �ִ� ������ ������ ���ѵǾ� �ֱ� ������ �߻���.
	// ������ ������ �̿��Ͽ� ������ ���� ��� ������ �ϴ� ���,
	// ��� ������ ����� �������� ��Ÿ�� �� �ִ� ������ �Ѿ �� ����.

	short s = SHRT_MAX; //�ִ밪���� �ʱ�ȭ, 32767
	unsigned short us = USHRT_MAX; // �ִ밪���� �ʱ�ȭ, 65535

	printf("short max s: %d\n", s); // 32767   /   /  -32768 ~ 32767
	s = s + 1;
	printf("short max s + 1: %d\n", s); // -32768  

	printf("----------------------------------\n");


	printf("unsigned short max us: %d\n", us);  // 65535
	us = us + 1;
	printf("unsigned short max us + 1: %d\n", us);  // 0

	printf("----------------------------------\n");


	return 0;
}


#endif

// �ڷ����� ���

#if 0
int main() {

	float f = 123.4567f;

	printf("%%f : %f \n", f);
	printf("%%e : %e \n", f);

	return 0;
}
#endif

// Ch.4 Programming

// 01. �ϳ��� �Ǽ��� �Է¹޾� �Ҽ��� ǥ������ ���� ǥ�������� ���ÿ� ����ϴ� ���α׷�

#if 0
int main() {

	float a;
	scanf("%f", &a);
	printf("�Ǽ� �������δ� : %f\n", a);
	printf("���� �������δ� : %e\n", a);

	return 0;
}
#endif

// 02. ������ 16������ �Է¹޾Ƽ�, 8����, 10����, 16���� ���·� ����ϴ� ���α׷�

#if 0
int main() {

	int a;
	scanf("%x", &a); // 16���� ���� �Է¹���

	printf("8�����δ� : %o\n", a);
	printf("10�����δ� : %d\n", a);
	printf("16�����δ� : %#x\n", a);

	return 0;
}
#endif

// 03. int ���� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷�
// ������ ������ �ʿ��ϸ� �����ؼ� ���
// ���� x�� y�� 10, 20�� ������ �ʱ�ȭ�϶�

#if 0
int main() {

	int x = 10;
	int y = 20;

	printf("x=%d, y=%d\n", x, y);

	int temp;  // 1. x -> temp     2. y -> x     3. temp -> y

	temp = x;
	x = y;
	y = temp;

	printf("x=%d, y=%d\n", x, y);

	return 0;
}
#endif


#if 0
int main() {
	// 1020 : [����-�����] �Ǽ� �� �� �Է¹޾� ��° �ڸ����� ����ϱ�
	/*�Ǽ�(float)�ϳ��� �Է¹޾� ������ ��,
	����Ǿ��ִ� ���� �Ҽ��� 3° �ڸ����� �ݿø��� 2° �ڸ����� ����Ͻÿ�.*/

	float input = 0;
	scanf("%f", &input);
	printf("%.2f", input);

	return 0;
}
#endif

#if 0
int main() {

	//1022: [����-�����] �ð� �Է¹޾� �״�� ����ϱ�
	/*�ð��� � ���Ŀ� ���߾� �Էµ� ��,
	�״�� ����ϴ� ������ �غ���.*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

	int h = 0;
	int m = 0;
	scanf("%d:%d", &h, &m);
	printf("%d:%d", h, m);

	return 0;
}
#endif

#if 0
int main() {

	//1023

	int a = 0;
	scanf("%d", &a);
	printf("%d %d %d", a, a, a);

	return 0;
}
#endif