#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// 중간고사 문제풀이

#if 0
int isPrime(int n) {
	if (n == 2) {
		return 1;
	}
	for (int y = 2; y < n; y++) {
		if ((n % y) = 0) {
			return 0;
		}
	}
	return 1;
}
int cntPrime(int n) {
	int cnt = 0;
	for (int k = 2; k <= n; k++) {
		if (isPrime(k)) {
			cnt++;
		}
	}
	return cnt;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", cntPrime(n));

	return 0;
}
#endif

#if 0
int fibonacci(int n) {
	if (n < 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	return 0;
}
#endif

#if 1
int main() {
	int a, b, c;
	int p = 0;
	scanf("%d %d d", &a, &b, &c);
	for (int k = 111; k <= 999; k++) {
		p = k;
		if ((p % 10) == a || (p % 10) == b || (p % 10) == c) {
			p = p / 10;
			if ((p % 10) == a || (p % 10) == b || (p % 10) == c) {
				p = p / 10;
				if ((p % 10) == a || (p % 10) == b || (p % 10) == c) {
					printf("%d", k);
				}
			}
		}
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