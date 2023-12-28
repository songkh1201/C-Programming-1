#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


// C��� �ݺ���
//
// for
// Ƚ�� ���
// �ݺ��ϴ� Ƚ���� ��������� ����
// 
// while
// ���� ���
// �ݺ��ϴ� ������ ��������� ����

#if 0
int main() {
	// 0���� 9���� ���ڸ� �� �ٿ� �ϳ��� ����ϴ� ���α׷�
	int n = 722;
	for (n = 0; n <= 9; n++) {
		printf("%d\n", n);
	}
	return 0;
}
#endif

// �������� ���� 
// i++, i--, i = i+1, i = i+2
#if 0
int main() {
	int i;
	for (i = 9; i >= 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}
#endif

// �پ��� for - loop
// for ( ; ; )
//	infinite loop
//
//for (int i=0,j=2; i<10 && j>20; i++)
//	2�� �̻��� �ʱ��
//	�������ڸ� �̿��� ���ǽ�
#if 0
int main() {
	// 0���� 9���� ���ڵ� �� ¦���� ������������ ���
	int i;
	for (i = 0; i < 10; i++) {
		if ((i % 2) == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// 0���� 100���� ���� ��, ���ڸ��� 3�� ���ڸ� ������������ ���
	int i;
	for (i = 0; i <= 100; i++) {
		if ((i % 10) == 3) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

// ���� ���� ppppppppppppppppppp
#if 0
int main() {
	// 3 6 9 
	int i;
	int k;

	for (i = 1; i <= 100; i++) {

		if ((((i % 10) == 3) || ((i % 10) == 6) || ((i % 10) == 9)) && ((((i / 10) % 10) == 3) || (((i / 10) % 10) == 6) || (((i / 10) % 10) == 9))) {
			printf("xx ");
		}
		else if (((i % 10) == 3) || ((i % 10) == 6) || ((i % 10) == 9)) {
			printf("x ");
		}
		else if ((((i / 10) % 10) == 3) || (((i / 10) % 10) == 6) || (((i / 10) % 10) == 9)) {
			printf("x ");
		}
		else {
			printf("%d ", i);
			continue;
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// 0~1000 7�� 19�� �����
	int i;
	for (i = 0; i <= 1000; i++) {
		if (((i % 7) == 0) && ((i % 19) == 0)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// 0~100,000 ���ڸ�8, 8�� ���
	int i;
	for (i = 0; i <= 100000; i++) {
		if (((i % 10) == 8) && ((i % 8) == 0)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// 0~100,000 ���ڸ�8, 8�� ����� ����
	int i;
	int a = 0;
	for (i = 0; i <= 100000; i++) {
		if (((i % 10) == 8) && ((i % 8) == 0)) {
			a++;
		}
	}
	printf("%d", a);
	return 0;
}
#endif

// Nested �ݺ���
// 	�ݺ����ȿ� ���Ե� �ٸ� �ݺ����� �ִ� ����
#if 0
int main() {
	// �������� 2�ܺ��� 9�ܱ��� ���
	int i;
	int k;
	for (i = 2; i <= 9; i++) {
		for (k = 1; k <= 9; k++) {
			printf("%d x %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
int main() {
	// ������ 2��~9�� �� Ȧ���� ���� ���
	int i;
	int k;
	for (i = 2; i <= 9; i++) {
		if ((i % 2) == 1) {
			for (k = 1; k <= 9; k++) {
				printf("%d x %d = %d\n", i, k, i * k);
			}
			printf("\n");
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// ������ 2��~9�� �� Ȧ���� ���� ��� ���ڸ��� 3
	int i;
	int k;
	for (i = 2; i <= 9; i++) {
		if ((i % 2) == 1) {
			for (k = 1; k <= 9; k++) {
				if (((i * k) % 10) == 3) {
					printf("%d x %d = %d\n", i, k, i * k);
				}
			}

		}
	}

	return 0;
}
#endif

// while
//  ������ ����Ͽ� �ݺ��� ����
// For �ݺ������� �ۼ��� �� �ִ� ���� While �ݺ������ε� �ۼ� ����
// 
// while ����� �� ������ ��
// ���� �������� ���� �κ��� �ݵ�� ����
//  �׷��� ������, ���� loop �߻�
#if 0
int main() {
	// 0~20
	int i = 0;
	while (i <= 20) {
		printf("%d\n", i);
		i++;
	}
	return 0;
}
#endif

#if 0
int main() {
	// 0~1000 3456�� 4834�� �����
	int i = 0;
	while (i <= 1000) {
		if (((3456 % i) == 0) && ((4834 % i) == 0)) {
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
#endif

// �ݺ����� break
// 
// �ݺ����� ������ ��,
// ��ȹ�� �ݺ�Ƚ���� �� ä���� ���߾(for)
// �ݺ������� �����ʿ��� �ұ��ϰ�(while),
// �ߴ��ϰ� ���� ��, 'break'�� ���
//
// Break�� �۵�����
// Break�� �ڽ��� ���� ���� �� ���� �ݺ����� �ߴܽ�Ų��
#if 0
int main() {
	// 
	int i;
	int j;
	for (i = 0; i < 1000000; i++) {
		printf("%d\n", i);
		if (((19 % i) == 0) && ((23 % i) == 0)) {
			break;
		}
	}
	return 0;
}
#endif

#if 0
int main() {
	// 
	int n = 483;

	while (1) {
		if ((n % 2) == 0) {
			n = n / 2;
		}
		else if ((n % 2) == 1) {
			n = 3 * n + 1;
		}
		printf("%d\n", n);
	}
	return 0;
}
#endif

// �ݺ����� continue
// For�� While �ݺ��� ���� ������ �κ��� ������ �ǳʶٰ� ���� �ݺ��� �����մϴ�
// break�� �޸� �ݺ��� ��ü�� ������ ���������� �ʴ´�.
#if 0
int main() {
	// 1~100 Ȧ�� continue
	int i;
	for (i = 1; i <= 100; i++) {
		if ((i % 2) == 0) {
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
#endif

#if 0
int main() {
	// 

	return 0;
}
#endif

#if 0
int main() {
	// 

	return 0;
}
#endif

#if 0
int main() {
	// 

	return 0;
}
#endif