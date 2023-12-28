#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


// ���
//
// ��ɹ��� ���� ������ ����(����)
// ��ǥ���� ���
//	 ���ǹ� : ��ɹ� ���࿩�θ� ����, if, switch
//	 �ݺ��� : ��ɹ� �ݺ� ����, for, while

// if statement, ���ǹ�
// ������ ������ų ���� ����Ǵ� ��ɾ ������ �� �ִ�.
// ������ ��(true, 0�� �ƴ� ��� ����, ��ǥ������ 1)�� ��쿡�� ����.
// ���� ������, �� �����ڸ� ����Ͽ� ���� ���� 
// ����. �Է� ���� 10 ���� ũ�� ��hello���� ���


#if 0
int main() {

	int a;
	scanf("%d", &a);

	if (a > 10) {  // ��ȣ�� ����, �� �ȿ� ����/�������ڷ� ���� ǥ��
		// ������ ��(==1)�� ���, ��ȣ ��{ �� �� �� }�� ������ ��ɹ� ����.
		printf("hello");  //���� ���� ��ɹ��� ��;������ �и��ؼ� �����ϴ� �͵� ����
		//  ��ɹ��� �����̸� {} ���� ����
		//  - hello ��� �ؿ�, bye�� ����ص� �ȴ�.
	}

	return 0;
}
#endif

// �Է� ���� 10���� ������ ��bye���� ���
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

// �Է� ���� 5�� ������ ��five���� ���
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

// �Է� ���� ¦���� ��� ��even number���� ���
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

// �Է� ���� 1�� 10���� ���̸� ��one digit number���� ���
// ��Ʈ: ���� �����ڴ� 1���� ���� �񱳰� ����.
#if 0
int main() {

	int a;
	scanf("%d", &a);

	if ((a > 1) && (a < 10)) {  // 1 < a < 10 �� ǥ���ϱ� ���ؼ���, ����(1 < a) ��  ����(a < 10)�� AND(&&)�� �����ؼ� ǥ���ؾ� ��.
		printf("one digit number");
	}

	return 0;
}
#endif

// �Է� ������ ���� (1���� 366��)�̸�, ��leap���� ��� 

#if 0
int main() {
	/*��Ʈ:
	���� ���, 1992���� ����, 1900���� ����ƴ�.

	������ �Ƿ���  �Ʒ� �� ���� �� �ϳ��� �����Ǹ� �ȴ�.
	1. ������ 4�� ������ �������� 100���δ� �ȵǴ� ���
	2. ������ 400���� ������ �������� ���  */

	int a;
	scanf("%d", &a);

	if ((((a % 4) == 0) && ((a % 100) != 0)) || ((a % 400) == 0)) {
		printf("leap");
	}

	return 0;
}
#endif

// If-else statement, ���ǹ�
// ������ ������ �� ����Ǵ� ��ɾ�� �׷��� ���� �� ����Ǵ� ��ɾ ���� ����
// ������ ��(true)�� ���� ����(false, 0)�� �� �и� ����.
// ���� ������, �� �����ڸ� ����Ͽ� ���� ���� 
#if 0
int main() {
	// ����. �Է� ���� 10 ���� ũ�� ��hello���� ����ϰ�, �ƴϸ�, ��hi���� ���

	int a;
	scanf("%d", &a);

	if (a > 10) {
		printf("hello");  // a�� 10���� ũ�� ����.
	}
	else {
		printf("hi");  // a�� 10�� ���ų�, ������ ����.
	}

	// if-else ���� ���ǿ�����
	(a > 10) ? printf("hello") : printf("hi");

	return 0;
}
#endif

// �Է� ���� 10�� �ٸ��� ��bye���� ���, ������ ��adios���� ���
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

// �Է� ���� ¦���� ��even���� ���, Ȧ���� ��odd�����
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

// �Է� ���� ¦���̸鼭, 10���� ũ�� ��ok�� ���, �ƴϸ� ��nok�����
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

// ���� �Է� 2���� �޾Ƽ�,
// �� �� 10���� ������ �� ���� ���� ����ϰ�,
// �ƴϸ� ���� ���
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

// ���� �Է� 3���� �޾� �鿩,
// �� ���� ���� 30���� ũ�� ��ok��,
// �ƴϸ� ��nok���� ���
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

// 1310: �� �� ū ��
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

// 1311: ����� �ٲ�!
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

// 1312: ������ �������°�?
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

// if  else if statement, ���ǹ�
// ������ 2�� �̻� ����� �� ���.
// ������ ��(true)�� �Ǵ� ��쿡 �ش��ϴ� if�� ����.
// ���� ������, �� �����ڸ� ����Ͽ� ���� ���� 
// 
// ����. �Է� ���� 1 <= x <= 10 �̸� 1�� ���
//                11 <= x <= 20 �̸� 2�� ���
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
	/*�Է� ���� 10���� ũ�� ��bye���� ���,
	  �Է� ���� 0���� ������ ��hello���� ���

	  ����) 0 <= x <= 10�� ��쿡�� �ƹ� �͵� ������� �ʴ´�. */

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

// if  /else if /else statement, ���ǹ�
// 
// ���� 2�� �̻�� ������ ��츦 ����� �� ���.
// ������ ��(true)�� �Ǵ� ��쿡 �ش��ϴ� if �Ǵ� else if�� ����.
//     -else if �� ���� ���� ����
// �ش�Ǵ� ��찡 ���� ���� else �ش��ϴ� �κ��� ����
#if 0
int main() {
	/*����. �Է� ���� 1 <= x <= 10 �̸� 1�� ���
					  11 <= x <= 20 �̸� 2�� ���
					  �������� 3�� ��� */

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
	/*�Է� ���� 5�� ���������� ��five���� ���
			 6���� ���������� ��six���� ���,
			 5�� 6 ��η� ����������, ��fsix���� ���,
			 ������ ���� ��none���� ���
	  if, else if, else ������ ����! */

	int a;
	scanf("%d", &a);

	if (((a % 5) == 0) && ((a % 6) == 0)) {  // if else if �߿��� ���������� �����ϴ� �ϳ��� ����
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

// Nested if ���ǹ�
//
// ���ǹ� �ȿ� ���ǹ��� ����.
// ���Ե� ���ǰ� && (AND) ȿ��
#if 0
int main() {
	// ����. �Է� ���� 1 <= x <= 10 �̸� 1�� ���

	int a;
	scanf("%d", &a);

	if (a >= 1) {
		if (a <= 10) {  // Nested if���� ���� ����: �ڵ� ������, ���ص�, �ѹ��� ���� �ʹ� ����� �� ����
			printf("1");
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	/*�Է� ���� Ȧ���̸鼭
	  100 <= x <= 200 �̸� 1�� ���
	  Nested if������ �ۼ��� ������.*/

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
	/*�Է� ���� ¦�� �̸鼭
	���ڸ��� 2�̸� ��a���� ���
			 4�̸� ��b���� ���,
			 8�̸� ��c���� ���
			 �������� ��f���� ��� */

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

// Switch��
//
// ���� ���� ������ ������ �����ϰ� ����
// if / else if / else�ε� ���� ����������,
// ������ ���鿡�� switch�� ���
//
// ����
// switch�� ����-- > if������ ���� ����������,
// if �� ����-- > switch �Ұ����� ����
#if 0
int main() {

	int a;
	scanf("%d", &a);

	switch (a) {  // ���� �ٰŰ� �Ǵ� ���� (int, char � ����, �Ǽ��� �Ұ���)
	case 0:  // ���� case�� ����
		printf("0");
		break;  // case�� ���� break
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:  // default�� ������  // �������� --> ������ ��쿡 ���ؼ� ��ó��
		printf("else");
		break;
	}

	return 0;
}
#endif

// Switch������ break�� �߿伺
#if 0
int main() {

	int a;
	scanf("%d", &a);

	switch (a) {  // break�� ���� ��� --> �ش� case���� ������ ��� ���� (break����, switch���� ���� ������)
	case 0:			   // 0 �Է� --> 0, 1, 2, else ���  
		printf("0");   // 2 �Է� --> 2, else ���

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

// Switch���� ���ǻ���
//
// ���� ������ type�� ������ char���� ��� ����
//	   �Ǽ�, ���ڿ��� �ȵ�
//
// if���� ���� ������ switch ������ ǥ�� �Ұ���
//	   if (a > 100000000) { ��.. }
//	   switch ������ �� ���� ������, case �����ϴٰ� �λ� ��.
#if 0
int main() {
	/*���� �Է�
		2 + 3
		10 - 4
	������ (op) ���� ���
		��� ���
	default ����
	break�� ��ġ�� ���� */
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
	// 1313: �� �� ���� ���ڰ� 2��?

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
	// 1314: �ñް���

	int a;
	int b = 7530;
	scanf("%d", &a);

	printf("%d", a * b);

	return 0;
}
#endif

#if 0
int main() {
	// 1315: �ñ޿� ���ʽ�����

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
	// 1316: ���� �з�

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
	// 1638: [C��� - 2023] Swtich�� ����

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