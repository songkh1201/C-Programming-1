#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


#if 0
int main() {
	// ���� ��ȣ A: [C��� �ǽ�] ũ�� ��
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
	// ���� ��ȣ B: [C��� �ǽ�] ũ�� �� 2
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
	// ���� ��ȣ C : [C��� �ǽ�] �Ҽ� ã��
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
	// ���� ��ȣ D: [C��� �ǽ�] ��� ã��
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
	// ���� ��ȣ E: [C��� �ǽ�] �ڸ����� ��ġ�� �� ���ϱ� 2
	int a;
	scanf("%d", &a);
	int m = 0;  // m�� �ִ�
	int mj = 0; // mj�� m�� �ڸ���
	int n = 0;  // n�� �ּڰ�
	int nj = 0; // nj�� �ּڰ��� �ڸ���
	int k = 0;
	int s = 0;  // s�� a�� �ڸ���
	int d = 0;
	for (k = 10; (a / k) != 0;) {  // k�� �Է¹��� a�� �ڸ����� ���ϱ� ���� ���
		k = k * 10;
		s++;			// s�� a�� �ڸ���
	}
	s++;
	for (d = 1; d <= s;) {   // d�� �Է¹��� a�� �ڸ��� ex) d=2�̸� a�� 10�� �ڸ���
		if (d == 1) {
			m = a % 10;  // m�� �ִ�          // a�� �ڸ������� �񱳸� �ϱ⶧���� d=1�϶��� �ִ�, �ּڰ� �Ѵ� a�� ���� �ڸ��� ����
			mj = d;      // mj�� m�� �ڸ���
			n = a % 10;  // n�� �ּڰ�
			nj = d;		 // nj�� �ּڰ��� �ڸ���
			d++;
		}                 // �� �ؿ��� a = a/10 �ؼ� a�� ���� �ڸ��� ����
		else {      // 9876    d=1  6  m=6 n=6 mj=1 nj=1  987  d=2  m =7 n=6 mj=2 nj=1   98  d=3  m=8 mj=3 n=6 nj=1   9  d=4 m=9 mj=4 n=6 nj=1 
			if ((a % 10) >= m) {    // a�� ���� �ڸ����� �ִ񰪺��� Ŭ ��
				m = a % 10;         // �ִ��� m�� �ٲٰ�
				mj = d;             // m�� �ڸ����� d�̴�
				d++;
			}
			if ((a % 10) < n) {     // a�� ���� �ڸ����� �ּڰ����� ���� ��
				n = a % 10;         // �ּڰ��� n�� �ٲٰ�
				nj = d;             // n�� �ڸ����� d�̴�
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