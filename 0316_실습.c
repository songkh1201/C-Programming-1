
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {

	//����� ������ ����
	int x1 = 0;
	int x2 = 0;

	int mul = 0;

	printf("ù ��° ���ڸ� �Է��ϼ���:");
	scanf("%d", &x1);

	printf("�� ��° ���ڸ� �Է��ϼ���:");
	scanf("%d", &x2);

	//���
	mul = x1 * x2;

	printf("���� ���� %d�Դϴ�.", mul);

	return 0;
}
#endif

// ���� programing ����


#if 0


int main() {

	float a = 0;
	float a = 0;
	float a = 0;

	printf("ù ��° ���� �Է��ϼ���:");
	scanf("%f", &a);

	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%f", &b);

	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%f", &c);

	float sum = 0;
	sum = a + b + c;

	float avg = 0;
	avg = sum / 3;

	printf("���� %f�̰� ����� %f�Դϴ�.", sum, avg);


	return 0;
}
#endif


#if 0

// ȭ���µ��� �Է¹޾Ƽ� �����µ��� ��ȯ�ϴ� ���α׷�

int main() {

	float f = 0;

	printf("ȭ�� ���� �Է��Ͻÿ�:");
	scanf("%f", &f);

	// ����

	float c = 0;
	c = (5.0 / 9.0) * (f - 32);

	printf("���� ���� %f �Դϴ�.", c);

	return 0;
}
#endif

#include<math.h>
#if 0

// ���׽� 3x^2 + 7x + 11, x�� ����ڷκ��� �Է¹޴´�.

int main() {

	float x = 0;

	printf("�Ǽ��� �ӷ��ϼ���:");
	scanf("%f", &x);

	float result = 0;

	result = 3 * (x * x) + 7 * x + 11;
	printf("1 ==== ���׽��� ���� %f\n", result);


	float result2 = 0;
	float x_2 = pow(x, 2);
	result2 = 3 * x_2 + 7 * x + 11;
	printf("2 ==== ���׽��� ���� %f\n", result2);

	return 0;
}

#endif


#if 0

// �� ���� ���ڸ� �Է¹޾� ù ��° ���ڿ��� �� ��° ���ڸ� �� ���� ���

int main() {

	int val1 = 0;
	int val2 = 0;

	scanf("%d %d", &val1, &val2);

	int result = 0;
	result = val1 - val2;

	printf("%d", result);

	return 0;
}

#endif

#if 0

// �� ���� ���ڸ� �Է¹޾� ������ 2�� ���� �������� ������� ���

int main() {

	int x1 = 0;
	int x2 = 0;
	int x3 = 0;

	scanf("%d %d %d", &x1, &x2, &x3);

	int result1 = 0;
	int result2 = 0;
	int result3 = 0;

	result1 = x1 % 2;
	result2 = x2 % 2;
	result3 = x3 % 2;

	printf("%d %d %d", result1, result2, result3);

	return 0;
}

#endif

#if 0

// �ԷµǴ� 2���� ���� �� ū ���� ����Ͻÿ�.
//�� ���ڰ� ���� ���� ����.

int main() {

	//�Է¹��� ���� 2��
	int val1 = 0;
	int val2 = 0;

	//����ڷκ��� ���� �Է� �ޱ�
	scanf("%d %d", &val1, &val2);

	//if ���ǹ�

	int max = 0;

	if (val1 > val2) {
		max = val1;
	}
	else {
		max = val2;
	}

	printf("%d", max);

	return 0;
}

#endif

#if 0

//�Է� ���� 1���� ���ؼ�,
//����ų� 0�̸� �״�� ����ϰ�,
//������ ���밪�� ���� ����� ��ȯ�Ͽ� ����Ͻÿ�.

int main() {

	int a = 0;
	int b = 0;

	scanf("%d", &a);

	if (a < 0) {
		b = -a;
	}
	else {
		b = a;
	}

	printf("%d", b);

	return 0;
}

#endif

#if 1

//���� �Է� 2���� ����
//ù ��° ���ڸ� �� ��° ���ڷ� ����������,
//�������� 0�̸� ok�� ���,
//�ƴϸ� nok�� ���.
//(����!!����� ��� �ҹ���, ���� �ٹٲ� ǥ������ ������)

int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	if (0 == (a % b)) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}


#endif