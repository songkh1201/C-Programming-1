#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// �迭

#if 0

#define SZ 5

int main() {
	// ���� ���������� ���� ������ ���� �ʿ��� �� ���

	int a[10];
	// a[0], a[1], ..., a[9]

	char ccc[20];
	float k[2];
	double y[5];

	long ll[SZ];
	/*
	int k = 10;
	int b[k];       // X
	char cccc[-2];  // X
	float k[3.5];   // X
	*/

	// �迭 ����� ����
	// read ����
	printf("%d\n", a[2]);

	// write ����
	a[2] = 100;
	printf("%d\n", a[2]);

	return 0;
}
#endif

#if 0
int main() {

	// �ε����� ����

	int a[10] = { 0 };

	// �迭 ũ�Ⱑ 10�� ���, �ε����� �׻� 0���� ���۾��� 9���� ����
	// 10 20 30 40 ... 90 .. 100
	//  0  1  2  3 ...  8      9

	// for-�ݺ��� i�� �̿��� �迭��� read
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}
#endif

#if 0

// �迭 e�� global variable�̹Ƿ� 0���� �ʱ�ȭ
int e[5];

int main() {

	// local variable�̹Ƿ�, garvage value�� �ʱ�ȭ
	int a[5];

	return 0;
}
#endif

#if 0

// ��꿡 ���� �迭����� ũ��

int main() {

	// �迭 ũ�⸦  �������� �ʴ� ���,
	// �ʱⰪ�� ������ �迭ũ�⸦ �����Ѵ�

	int a[] = { 1,2,3 };

	// �迭 ũ�⸦ �˾Ƴ��� ���
	//
	// sizeof(a) : �迭 ��ü�� ����Ʈ ũ�� : 4 * 3 = 12 bytes
	// 12 / 4 => 3

	int size = sizeof(a) / sizeof(a[0]);
	printf("%d", size);

	return 0;
}
#endif

#if 0
int main() {

	// �迭 a�� b����

	int a[] = { 1,2,3 };
	int b[3];

	// �߸��� ���� ���
	// b = a;
	printf("b : %d\na : %d\n", b, a);
	printf("b : %x\na : %x\n", b, a);

	// �ùٸ� ���� ���
	for (int i = 0; i < 3; i++) {
		b[i] = a[i];
	}

	// �߸��� �� ���
	/*
	if (a == b) {

	}*/

	// �ùٸ� �� ���
	for (int i = 0; i < 3; i++) {
		if (a[i] != b[i]) {
			printf("a�� b�� �ٸ��ϴ�");
		}
	}

	return 0;
}
#endif

#if 0

// �迭�� �Լ�

// �迭�� parameter�� �޴� �Լ�

// int k[] : �迭 parameter, �迭 ũ�⸦ ������ �ʿ� ����
// int sz  : �迭 ũ�� (! parameter�� ���޵� �迭�� ũ��� ��� �Ұ�)
void foo(int k[], int sz) {

	k[2] = 100;

	for (int i = 0; i < sz; i++) {
		printf("%d\n", k[i]);
	}

}

void goo(int k[], int sz) {

	k[2] = 100;
}

int main() {

	/*
		�Լ� parameter �μ��� �迭
	*/

	int a[] = { 1,2,3 };

	// �迭 a�� �Լ� foo�� argument�� ����
	foo(a, 3);

	// �迭 a�� �Լ� goo�� argument�� ����
	goo(a, 3);

	foo(a, 3);


	return 0;
}
#endif

#if 0

// ����
// selection sort

#define SIZE 10

int main() {

	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	int i = 0;
	int j = 0;
	int temp = 0;
	int least = 0;

	for (i = 0; i < SIZE - 1; i++) {

		least = i;

		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) {
				least = j;
			}

			temp = list[i];
			list[i] = list[least];
			list[least] = temp;
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}
#endif

#if 0

// bubble sort
#define SIZE 10

int main() {

	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
	int temp = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (list[j] > list[j + 1]) {

				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}
#endif

#if 0

// Ž��
// ����Ž��

#define SIZE 10

int main() {

	int key = 0;
	int i = 0;
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (key == list[i]) {
			printf("Ž�� ���� �ε��� : %d", list[i]);
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ A: [C��� �ǽ� - �迭] ���� ���� ã��
	char a[10] = { 0 };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);  // %c �տ� ���� �߿�
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] == a[9]) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ B: [C��� �ǽ� - �迭] ������ ã�ƶ�
	char a[10] = { 0 };
	int cnt = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}

	if (a[9] == 'a' || a[9] == 'e' || a[9] == 'i' || a[9] == 'o' || a[9] == 'u') {
		for (i = 0; i < 10; i++) {
			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
				cnt++;
			}
		}
	}
	else {
		for (i = 0; i < 10; i++) {
			if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ C: [C��� �ǽ� - �迭] �ݴ�� ����ϱ�
	char a[10] = { 0 };
	char b[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	int k = 9;
	for (i = 0; i < 10; i++) {
		b[k] = a[i];
		k = k - 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%c", b[i]);
	}
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ D: [C��� �ǽ� - �迭] ������ �����ϱ�
	char a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U') {
			printf("%c", a[i]);
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ E: [C��� �ǽ� - �迭] �յڰ� �Ȱ���
	char a[5] = { 0 };
	int i = 0;
	int c = 1;
	for (i = 0; i < 5; i++) {
		scanf(" %c", &a[i]);
	}
	int k = 4;
	for (i = 0; i < 5; i++) {
		if (a[i] != a[k]) {
			c = 0;
		}
		k = k - 1;
	}
	printf("%d", c);
	return 0;
}
#endif

#if 1
int main() {
	// ���� ��ȣ F: [C��� �ǽ� - �迭] �յڰ� �Ȱ���?
	char a[10] = { 0 };
	char b[9] = { 0 };
	int i = 0;
	int c = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	int n = 0;
	int k = 0;
	int y = 0;
	for (int h = 0; h < 10; h++) {
		n = 0;
		for (i = 0; i < 10; i++) {
			if (h != i) {
				b[n] = a[i];
				n++;
			}
			k = 8;
			c = 1;
			for (int j = 0; j < 9; j++) {
				if (b[j] != b[k]) {
					c = 0;
				}
				k = k - 1;
			}
		}
		if (c == 1) {
			y = y + h;
		}
	}
	printf("%d", y);
	return 0;
}
#endif

#if 0
int main() {


	return 0;
}
#endif