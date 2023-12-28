#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


#if 0
// 1714: [C언어퀴즈 2023] 문제 4
#include<string.h>
int main() {
	char s1[11];
	scanf("%s", s1);
	char s2[11];
	int c = 0;
	for (int len = 3; len <= strlen(s1); len++) {
		for (int i = 0; i <= strlen(s1) - len; i++) {
			int ix = 0;
			for (int j = i; j < i + len; j++) {
				s2[ix] = s1[j];
				ix++;
			}
			s2[ix] = '\0';
			for (int)
				if (strcmp(s1, s2) == 0) {
					c++;
				}
			strcpy(s1, '\0');
			ix = 0;
		}
	}
	printf("%d", c);
	return 0;
}
#endif

#if 0
// 문제 번호 A: [2023 C언어 실습] 문자열 - 1
#include<string.h>
int main() {
	char a[101];
	char b[101];
	scanf("%s\n%s", a, b);
	int c = 0;
	for (int l = 1; l <= strlen(b); l++) {
		for (int i = 0; i < strlen(a) - l; i++) {
			int p = 1;
			int ix = 0;
			int j = i;
			for (ix = 0; ix < strlen(b); ix++) {
				if (a[j] != b[ix]) {
					p = 0;
				}
				j++;
			}
			if (p) {
				c = 1;
			}
		}
	}
	if (c) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}
#endif

#if 0
// 문제 번호 B: [2023 C언어 실습] 문자열 - 2 RRRRRRRRRRRRRRRRRRRRRRR
#include<string.h>
int main() {
	char a[101];
	char b[101];
	char c[201];
	scanf("%s\n%s", a, b);
	strcpy(c, a);
	strcat(c, b);
	for (int i = 0; i < strlen(a) + strlen(b); i++) {
		for (int i2 = 0; i2 < strlen(a) + strlen(b) - 1; i2++) {
			if (c[i2] - c[i2 + 1] > 0) {
				char t = c[i2];
				c[i2] = c[i2 + 1];
				c[i2 + 1] = t;
			}
		}
	}
	printf("%s", c);
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

