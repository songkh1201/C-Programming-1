#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>

// 02. 2���� double�� �Ǽ��� �о ��, ��, ��, ���� ���ϴ� ���α׷��� �ۼ��϶�
//	   ����� �Ҽ� 2��° �ڸ����� ����϶�
#if 0
int main() {

	double num1 = 0;
	double num2 = 0;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num1, &num2);

	double sum = num1 + num2;
	double sub = num1 - num2;
	double mul = num1 * num2;
	double div = num1 / num2;

	printf("%.2f %.2f %.2f %.2f", sum, sub, mul, div);

	return 0;
}
#endif

// 3���� �������� �Է¹޾Ƽ�, 3���� ������ �߿��� �ִ밪�� ����ϴ� ���α׷��� �ۼ��϶�
#if 0
int main() {

	int a, b, c;
	int max = 0;

	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;  // a�� b�߿��� �� ū���� max�� �����Ѵ�.

	max = (c > max) ? c : max;  // max�� c�߿��� �� ū���� max�� �����Ѵ�.

	printf("�ִ밪�� %d�Դϴ�.", max);

	return 0;
}
#endif


// 05. 100���� ���� ������ �Է¹޾Ƽ� �̰��� ���� �ڸ�, ���� �ڸ����� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
#if 0
int main() {

	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	int a = 0;  // �����ڸ�
	int b = 0;  // �����ڸ�

	// 23 -> 2, 3
	a = num / 10;  // 2
	b = num % 10;

	printf("�����ڸ�: %d\n", a);
	printf("�����ڸ�: %d\n", b);

	return 0;
}
#endif

#if 0
int main() {
	//1639: [C��� �ǽ�] ��Ʈ �̵� ����
	/*��Ʈ �̵� ������ �̿��Ͽ� ���� 4���� �޾Ƽ� �ϳ��� unsigned int���� ���� �ȿ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	  ù ��° ���ڴ� ��Ʈ 0���� ��Ʈ 7���� ����ǰ�, �� ��° ���ڴ� ��Ʈ 8���� ��Ʈ
	  15���� �� ��° ���ڴ� ��Ʈ 16���� ��Ʈ 23����, �� ��° ���ڴ� ��Ʈ 24���� ��Ʈ 31���� ���� �ȴ�.
	  ����� �����Ǵ� �������� 16������ ����ϵ��� �Ѵ�. */

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
	// 1640: [c��� �ǽ�] �ڸ����� �� ���ϱ�
	/*���� ���� 1���� �Է¹޾� �� �ڸ����� ���� ����Ͻÿ�.
	  ���� ���, 9876�� �ԷµǸ� 9 + 8 + 7 + 6 = 30�̹Ƿ� 30�� ����ؾ� �Ѵ�.
	  �� ������ �� �ٲ� ���ڰ� ����� �Ѵ�.
	  �Է� ������ 1000���� 9999������ ���� ���´�.*/

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
	// 1641: [C��� �ǽ�] �ڸ����� ��ġ�� �� ���ϱ�
	/*���� ���� 1���� �Է¹޾� �� �ڸ����� ��ġ�� �ڸ����� ���� ����Ͻÿ�.
	  �� ���̴� �������� ���еǸ�, ������ �� �ڿ� ������ ����. �� ������ �� �ٲ� ���ڰ� ����� �Ѵ�.
	  ���� ���,
	  9876�� �ԷµǸ� 4 9 3 8 2 7 1 6�� ��µǾ�� �Ѵ�.
	  456�� �ԷµǸ� 3 4 2 5 1 6�� ��µǾ�� �Ѵ�.
	  �Է� ������ 10���� 9999������ ���� ���´�.*/

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
	// ���� ��ȣ C: [C��� �ǽ�] ��ҹ��� �Ǻ�
	/*���ĺ� ���� 1���� �Է� �޾�, �빮���̸� upper, �ҹ����̸� lower�� ����Ͻÿ�.
	  upper�� lower ������ �� �ٲ� ���ڰ� ����.*/
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