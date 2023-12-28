#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


#if 0
int main() {
	// 문제 번호 A: [C언어 실습] 크기 비교
	int a, b, c, d;
	int m = 0;
	int n = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a > b) && (a > c) && (a > d)) {
		m = a;
		if ((b < c) && (b < d)) {
			n = b;
		}
		if ((c < b) && (c < d)) {
			n = c;
		}
		if ((d < b) && (d < c)) {
			n = d;
		}
	}
	if ((b > a) && (b > c) && (b > d)) {
		m = b;
		if ((a < c) && (a < d)) {
			n = a;
		}
		if ((c < a) && (c < d)) {
			n = c;
		}
		if ((d < a) && (d < c)) {
			n = d;
		}
	}
	if ((c > a) && (c > b) && (c > d)) {
		m = c;
		if ((a < b) && (a < d)) {
			n = a;
		}
		if ((b < a) && (b < d)) {
			n = b;
		}
		if ((d < a) && (d < b)) {
			n = d;
		}
	}
	if ((d > a) && (d > b) && (d > c)) {
		m = d;
		if ((a < b) && (a < c)) {
			n = a;
		}
		if ((b < a) && (b < c)) {
			n = b;
		}
		if ((c < a) && (c < b)) {
			n = c;
		}
	}
	printf("%d %d", m, n);

	return 0;
}
#endif

#if 0
int main() {
	// 문제 번호 B: [C언어 실습] 크기 비교 2
	int t;
	int m = 0;
	int n = 0;
	int k = 0;
	while (1) {
		scanf("%d", &t);
		if (k == 0) {
			m = t;
			n = t;
			k++;
		}
		if (t == -999) {
			break;
		}
		if (t >= m) {
			m = t;
		}
		if (t <= n) {
			n = t;
		}
	}
	printf("%d %d", m, n);
	return 0;
}
#endif

#if 1
int main() {
	// 문제 번호 C : [C언어 실습] 소수 찾기
	int t = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	int p = 0;
	int s = 0;
	while (1) {
		scanf("%d", &t);
		if (t == -999) {
			break;
		}
		s = 0;
		m = 0;
		while (t >= 10) {
			m = m + (t % 10);
			t = t / 10;
		}
		m = m + (t % 10);
		if (m == 2) {
			p++;
			s++;
		}
		for (n = 2; n < m; n++) {
			if ((m % n) == 0) {
				s++;
				break;
			}
		}
		if (s == 0) {
			p++;
		}
	}
	printf("%d", p);
	return 0;
}
#endif

#if 0
int main() {
	// 문제 번호 D: [C언어 실습] 배수 찾기
	int a, b;
	int m = 0;
	scanf("%d %d", &a, &b);
	for (int k = 1; k <= 20; k++) {
		if (((k % a) == 0) && ((k % b) != 0)) {
			m++;
		}
	}
	printf("%d", m);
	return 0;
}
#endif

#if 0
int main() {
	// 문제 번호 E: [C언어 실습] 자릿수의 위치와 값 구하기 2
	int a;
	scanf("%d", &a);
	int m = 0;  // m은 최댓값
	int mj = 0; // mj는 m의 자릿수
	int n = 0;  // n은 최솟값
	int nj = 0; // nj는 최솟값의 자릿수
	int k = 0;
	int s = 0;  // s는 a의 자릿수
	int d = 0;
	for (k = 10; (a / k) != 0;) {  // k는 입력받은 a의 자릿수를 구하기 위해 사용
		k = k * 10;
		s++;			// s는 a의 자릿수
	}
	s++;
	for (d = 1; d <= s;) {   // d는 입력받은 a의 자릿수 ex) d=2이면 a의 10의 자릿수
		if (d == 1) {
			m = a % 10;  // m은 최댓값          // a의 자릿수부터 비교를 하기때문에 d=1일때는 최댓값, 최솟값 둘다 a의 일의 자리로 설정
			mj = d;      // mj는 m의 자릿수
			n = a % 10;  // n은 최솟값
			nj = d;		 // nj는 최솟값의 자릿수
			d++;
		}                 // 맨 밑에서 a = a/10 해서 a의 일의 자릿수 없앰
		else {      // 9876    d=1  6  m=6 n=6 mj=1 nj=1  987  d=2  m =7 n=6 mj=2 nj=1   98  d=3  m=8 mj=3 n=6 nj=1   9  d=4 m=9 mj=4 n=6 nj=1 
			if ((a % 10) >= m) {    // a의 일의 자릿수가 최댓값보다 클 때
				m = a % 10;         // 최댓값인 m을 바꾸고
				mj = d;             // m의 자릿수는 d이다
				d++;
			}
			if ((a % 10) < n) {     // a의 일의 자릿수가 최솟값보다 작을 때
				n = a % 10;         // 최솟값인 n을 바꾸고
				nj = d;             // n의 자릿수는 d이다
				d++;
			}
		}
		a = a / 10;
	}
	printf("%d %d %d %d", m, mj, n, nj);
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