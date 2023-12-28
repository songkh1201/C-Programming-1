#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 배열

#if 0

#define SZ 5

int main() {
	// 같은 데이터형을 갖는 변수가 많이 필요할 때 사용

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

	// 배열 요소의 접근
	// read 접근
	printf("%d\n", a[2]);

	// write 접근
	a[2] = 100;
	printf("%d\n", a[2]);

	return 0;
}
#endif

#if 0
int main() {

	// 인덱스의 범위

	int a[10] = { 0 };

	// 배열 크기가 10인 경우, 인덱스는 항상 0부터 시작아혀 9까지 간다
	// 10 20 30 40 ... 90 .. 100
	//  0  1  2  3 ...  8      9

	// for-반복문 i를 이용한 배열요소 read
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}
#endif

#if 0

// 배열 e는 global variable이므로 0으로 초기화
int e[5];

int main() {

	// local variable이므로, garvage value로 초기화
	int a[5];

	return 0;
}
#endif

#if 0

// 계산에 의한 배열요소의 크기

int main() {

	// 배열 크기를  지정하지 않는 경우,
	// 초기값의 개수로 배열크기를 지정한다

	int a[] = { 1,2,3 };

	// 배열 크기를 알아내는 방법
	//
	// sizeof(a) : 배열 전체의 바이트 크기 : 4 * 3 = 12 bytes
	// 12 / 4 => 3

	int size = sizeof(a) / sizeof(a[0]);
	printf("%d", size);

	return 0;
}
#endif

#if 0
int main() {

	// 배열 a를 b복사

	int a[] = { 1,2,3 };
	int b[3];

	// 잘못된 복사 방법
	// b = a;
	printf("b : %d\na : %d\n", b, a);
	printf("b : %x\na : %x\n", b, a);

	// 올바른 복사 방법
	for (int i = 0; i < 3; i++) {
		b[i] = a[i];
	}

	// 잘못된 비교 방법
	/*
	if (a == b) {

	}*/

	// 올바른 비교 방법
	for (int i = 0; i < 3; i++) {
		if (a[i] != b[i]) {
			printf("a와 b는 다릅니다");
		}
	}

	return 0;
}
#endif

#if 0

// 배열과 함수

// 배열을 parameter로 받는 함수

// int k[] : 배열 parameter, 배열 크기를 지정할 필요 없음
// int sz  : 배열 크기 (! parameter로 전달된 배열의 크기는 계산 불가)
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
		함수 parameter 로서의 배열
	*/

	int a[] = { 1,2,3 };

	// 배열 a를 함수 foo의 argument로 전달
	foo(a, 3);

	// 배열 a를 함수 goo의 argument로 전달
	goo(a, 3);

	foo(a, 3);


	return 0;
}
#endif

#if 0

// 정렬
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

// 탐색
// 순차탐색

#define SIZE 10

int main() {

	int key = 0;
	int i = 0;
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (key == list[i]) {
			printf("탐색 성공 인덱스 : %d", list[i]);
		}
	}

	return 0;
}
#endif

#if 0
int main() {
	// 문제 번호 A: [C언어 실습 - 배열] 같은 문자 찾기
	char a[10] = { 0 };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);  // %c 앞에 공백 중요
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
	// 문제 번호 B: [C언어 실습 - 배열] 모음을 찾아라
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
	// 문제 번호 C: [C언어 실습 - 배열] 반대로 출력하기
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
	// 문제 번호 D: [C언어 실습 - 배열] 모음은 제외하기
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
	// 문제 번호 E: [C언어 실습 - 배열] 앞뒤가 똑같아
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
	// 문제 번호 F: [C언어 실습 - 배열] 앞뒤가 똑같아?
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