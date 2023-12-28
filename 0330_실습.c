#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


// Chap.4 ���� Programing ��������

// 05. ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��϶�
//     1���� 3.3m^2, �������� �ڷ����� ��ȣ����� �̿��Ͽ� 1��� �������͸� ��Ÿ����

#if 0

#define TRANS_TO_PYEONG_1 3.3058

int main() {

	// ��ȣ ���?
	// ��ȣ ����� ���ͷ� ����� ����
	// ���ͷ� ����� �Ϲ����� ���ڳ� ����, ���ڿ��� ���� ex) ���� 3, �Ǽ� 2.5, ���ڿ�"ABC"
	// ��ȣ ����� ����� �ٸ� ���ڷ� ġȯ�ϴ� ���� ����

	// ��ȣ ��� ����ϱ�
	const double TRANS_TO_PYEONG = 3.3058;

	double num = 0;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &num);  // %lf: double �� �Է¹ޱ�

	printf("%lf �������Դϴ�.\n", num * TRANS_TO_PYEONG);
	printf("%lf �������Դϴ�.\n", num * TRANS_TO_PYEONG_1);

	return 0;
}
#endif

// 08. ����ڰ� �ƽ�Ű�ڵ尪�� �Է��ϸ� �� �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ����ϴ� ���α׷�

#if 0
int main() {

	int input = 0;

	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	printf("%%c: %c �Դϴ�.\n", input);
	printf("%%d: %d �Դϴ�.\n", input);

	// 'a' + 1
	int num = 0;
	scanf("%d", &num);
	num + 1;
	printf("%c", num);

	return 0;
}
#endif

// 10. ������ ���� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�
//		"ASCII code", 'A', 'B', 'C'
//		\t \a \n

#if 0
int main() {

	printf(" \"ASCII code\", 'A, 'B, 'C'\n ");
	printf(" \\t \\a \\n ");

	return 0;
}
#endif

// 12. ������ ���� �ǽ�

#if 0
int main() {

	int i = 255;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);  // 8����
	printf("%%x: %x \n", i);

	printf("----------------\n");

	i = -1;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i);  // 0xfffffff -> 4bytes ���� ���

	// 255 ---> 0000 0000 .... 1111 1111
	// -1  ---> 0000 0000 .... 1111 1111

	// 1111 1111 .... 1111
	// 1000 0000 .... 0000 ==> toggle
	// 1000 0000 .... 0001 ==> 2's complement
	// -1 �̳�!

	printf("----------------\n");

	return 0;
}
#endif

// Chap. 5 ���İ� ������

// 5.2 ���������
// +, -, *, /, %

// �ʴ����� �ð��� �޾Ƽ� �� �� �� �� ���� ����ϴ� ���α׷�
// ������ �����ڸ� Ȱ���ϴ� ����

#if 0

#define SEC_PER_MINUTE 60 // 1���� 60��

int main() {

	int input = 0;
	int minute = 0;
	int second = 0;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);


	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d �ʴ� %d�� %d�� �Դϴ�.", input, minute, second);
	// 1000 -> (16��) 960�� + 40��

	return 0;
}
#endif

// ����������

// ++��ȣ�� --��ȣ�� ����Ͽ� ������ ���� 1��ŭ ������Ű�ų� ���ҽ�Ŵ

// ���������ڴ� ���� �����ڷμ� �ϳ��� �ǿ����ڸ��� ������.

// ++x ---> x = x + 1 �� ���� �ǹ�
// --x ---> x = x - 1 �� ���� �ǹ�

// ++x, x++, x--, --x

// ���� x�� ���� ������ų �����̶�� �����ϰ� ����
// �׷���, ���������ڸ� ������ �Ŀ� �� ������ ���� ����� �����̸� ���� �ʿ�

// ++x�� x�� ���� ���� ������Ű��, ������ x�� ���� ���Ŀ� ���
// x++�� x�� ���� ���� ���Ŀ� ����� �Ŀ� x�� ���� ������Ű�� ��

#if 0
int main() {

	int x = 10;
	int y = 10;

	printf("x=%d\n", x);
	printf("++x�� ��=%d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++�� ��=%d\n", y++);
	printf("y=%d\n\n", y);

	int x1 = 10;
	int y1 = 20;
	y1 = (1 + ++x1) + 10;

	printf("----------------\n");
	printf("x1: %d\n", x1);
	printf("y1: %d\\n", y1);

	int x2 = 10;
	int y2 = 20;
	y2 = (1 + x2++) + 10;

	printf("x2: %d\n", x2);
	printf("y2: %d\n\n", y2);

	return 0;
}
#endif

// �Ž����� ����ϴ� ���α׷�

#if 0
int main() {

	int user = 0;
	int change = 0;

	int price, c5000, c1000, c500, c100;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);

	printf("����ڰ� �� ��: ");
	scanf("%d", &user);

	change = user - price;

	c5000 = change / 5000;  // �� �����ڸ� ����ؼ� 5000�� ���� ������ ���
	change = change % 5000;  // ������ �����ڸ� ����ؼ� ���� �ܵ��� ���

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	printf("��õ����   : %d��\n", c5000);
	printf("õ����	   : %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����  : %d��\n", c100);

	return 0;
}
#endif

#if 0
int main() {

	// 1315: �ñ޿� ���ʽ�����

	// �ñ� 7530���� �ް� �ִµ�,
	// 8�ð��� ä�� �� ���� ���ʽ��� 1000���� �� �޴´�.
	// ���� �ð�(> 0)�� �ԷµǸ� �ӱ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	int p = 0;
	int wh = 0;
	int b = 0;

	scanf("%d", &wh);

	b = wh / 8 * 1000;

	p = wh * 7530 + b;

	printf("%d", p);

	return 0;
}
#endif

#if 0
int main() {

	// 1327: C��� �������� 1

	// �Էµ� 1���� ���� ( > 9) n�� ���ؼ�, n�� ���� �ڸ� ���ڸ� ����Ͻÿ�.

	int n = 0;
	int o = 0;

	scanf("%d", &n);

	n = n % 100;
	o = n / 10;
	printf("%d", o);

	return 0;
}
#endif
