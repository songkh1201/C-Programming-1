#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>

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

#if 0
int main() {
	// ���� ��ȣ A: [C��� �ǽ�] ���� �� ���ϱ�
	int n = 0;
	int m = 0;
	int k = 0;
	int h = 0;
	int l = 0;
	scanf("%d %d %d", &n, &m, &k);
	if ((abs(n) >= abs(m)) && (abs(n) >= abs(k))) {
		if (abs(m) >= abs(k)) {
			h = abs(n) - abs(m);
			l = abs(m) - abs(k);
		}
		else {
			h = abs(n) - abs(k);
			l = abs(k) - abs(m);
		}
	}
	if ((abs(m) > abs(n)) && (abs(m) > abs(k))) {
		if (abs(n) > abs(k)) {
			h = abs(m) - abs(n);
			l = abs(n) - abs(k);
		}
		else {
			h = abs(m) - abs(k);
			l = abs(k) - abs(n);
		}
	}
	if ((abs(k) > abs(n)) && (abs(k) > abs(m))) {
		if (abs(n) > abs(m)) {
			h = abs(k) - abs(n);
			l = abs(n) - abs(m);
		}
		else {
			h = abs(k) - abs(m);
			l = abs(m) - abs(n);
		}
	}
	printf("%d %d", h, l);
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ B: [C��� �ǽ�] �ݺ��� ���� 1
	int n;
	scanf("%d", &n);
	if ((n % 2) == 1) {
		for (int h = 1; h <= n; h++) {
			printf("%d ", h);
		}
	}
	else {
		for (int h = n; h >= 1; h--) {
			printf("%d ", h);
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ C: [C��� �ǽ�] ����� ���ϱ�
	int a, b;
	scanf("%d %d", &a, &b);
	for (int g = 1; (g <= a) && (g <= b); g++) {
		if (((a % g) == 0) && ((b % g) == 0)) {
			printf("%d ", g);
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ D: [C��� �ǽ�] ����� ������� ���
	int n;
	int h = 0;
	scanf("%d", &n);
	if (((n % 10) == 1) || ((n % 10) == 6)) {
		h = n - 1;
	}
	if (((n % 10) == 2) || ((n % 10) == 7)) {
		h = n - 2;
	}
	if (((n % 10) == 3) || ((n % 10) == 8)) {
		h = n + 2;
	}
	if (((n % 10) == 4) || ((n % 10) == 9)) {
		h = n + 1;
	}
	if (((n % 10) == 0) || ((n % 10) == 5)) {
		h = n;
	}
	for (int k = 1; k <= h; k++) {
		printf("%d ", k);
	}
	return 0;
}
#endif

#if 0
int main() {
	// ���� ��ȣ E: [C��� �ǽ�] ���� ���� ã��
	int n, k;
	int a = 0;
	scanf("%d %d", &n, &k);
	for (int h = 10; (n / h) != 0;) {
		if ((n % 10) == k) {
			a = a + 1;
		}
		n = n / 10;
	}
	if (n == k) {
		a = a + 1;
	}
	printf("%d", a);
	return 0;
}
#endif

#if 0
int main() {
	// for ( _1_ ; _2_ ; _3_ ) { }
	// _1_ -> �ʱ�� : ��� �ٴ� ����
	// _2_ -> ���ǽ� : ����
	// _3_ -> ������ : ���� �ൿ
	// { } -> ���� �ݺ��ؼ� ������ ����

	/*���� ���� n�� �Է¹޾�, n�� Ȧ���� 1���� n���� 1�� ������Ű�鼭 ����ϰ�,
	 ¦���� n���� 1���� 1�� ���ҽ�Ű�鼭 ����Ͻÿ�.
	 ��, ���� ���̿��� ���� 1��, ������ �� �ٲ� ���� ����. */

	int n = 0;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", i);
	}
	return 0;
}
#endif

#if 1
int main() {
	// ���� ��ȣ D: [C��� �ǽ�] ����� ������� ���



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

#if 0
int main() {




	return 0;
}
#endif
