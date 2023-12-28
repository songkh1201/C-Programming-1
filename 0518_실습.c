#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


#if 0
// 문제 번호 A: [2023 C언어 실습] 배열 - 7
int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int c = 0;
	for (int i = 0; i < 9; i++) {
		if (a[i] == a[9]) {
			c++;
		}
	}
	printf("%d", c);
	return 0;
}
#endif

#if 0
// 문제 번호 B: [2023 C언어 실습] 배열 - 8
int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int max = 0;
	int min = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			max = a[i];
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
		else if (a[i] < min) {
			min = a[i];
		}
	}
	int p = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] == (max - min)) {
			p = 1;
		}
	}
	printf("%d", p);
	return 0;
}
#endif

#if 0
// 문제 번호 C: [2023 C언어 실습] 배열 - 9
int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int s = 1;
	for (int i = 0; i < 10; i++) {
		s = 1;
		for (int j = 0; j < 10; j++) {
			if (j != i && a[j] == a[i]) {
				s = 0;
			}
		}
		if (s) {
			printf("%d ", a[i]);
		}
	}
	return 0;
}
#endif

#if 0
// 문제 번호 D: [2023 C언어 실습] 배열 - 10
int main() {
	int n;
	int a[64] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; n >= 1; i++) {
		a[i] = n % 2;
		n = n / 2;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", a[j]);
	}
	return 0;
}
#endif

#if 0
// 문제 번호 E: [2023 C언어 실습] 배열 - 11
#include<math.h>
int main() {
	int a[100] = { 0 };
	int i = 0;
	while (1) {
		scanf("%d", &a[i]);
		if (a[i] == -999) {
			break;
		}
		i++;
	}
	int n = sqrt(i);
	int c = 0;
	for (int i2 = 0; i2 < n; i2++) {
		if (i2 == 0) {
			c = c + a[i2];
		}
		else {
			c = c + a[n * i2 + i2];
		}
	}
	printf("%d", c);
	return 0;
}
#endif

#if 1
// 문제 번호 E: [2023 C언어 실습] 배열 - 11
int main() {
	int a[10][10] = { 0 };
	int b[100] = { 0 };
	int i = 0;
	while (1) {
		scanf("%d", &b[i]);
		if (b[i] == -999) {
			break;
		}
		i++;
	}
	int j = 0;
	int i4 = 0;
	for (j = 0; (j + 1) * (j + 1) <= i; j++) {
		for (int j2 = 0; (j2 + 1) * (j2 + 1) <= i; j2++) {
			a[j][j2] = b[i4];
			i4++;
		}
	}
	int c = 0;
	for (int i2 = 0; i2 < j; i2++) {
		for (int i3 = 0; i3 < j; i3++) {
			if (i2 == i3) {
				c = c + a[i2][i3];
			}
		}
	}
	printf("%d", c);
	return 0;
}
#endif

#if 0
// 문제 번호 C: [2023 C언어 실습] 배열 - 9
int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
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

#if 0
int main() {


	return 0;
}
#endif

