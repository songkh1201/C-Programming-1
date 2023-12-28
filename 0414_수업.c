#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>


// C언어 반복문
//
// for
// 횟수 기반
// 반복하는 횟수를 명시적으로 지정
// 
// while
// 조건 기반
// 반복하는 조건을 명시적으로 지정

#if 0
int main() {
	// 0부터 9까지 숫자를 한 줄에 하나씩 출력하는 프로그램
	int n = 722;
	for (n = 0; n <= 9; n++) {
		printf("%d\n", n);
	}
	return 0;
}
#endif

// 증감식의 형태 
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

// 다양한 for - loop
// for ( ; ; )
//	infinite loop
//
//for (int i=0,j=2; i<10 && j>20; i++)
//	2개 이상의 초기식
//	논리연산자를 이용한 조건식
#if 0
int main() {
	// 0부터 9까지 숫자들 중 짝수만 오름차순으로 출력
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
	// 0부터 100까지 숫자 중, 끝자리가 3인 숫자를 오름차순으로 출력
	int i;
	for (i = 0; i <= 100; i++) {
		if ((i % 10) == 3) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

// 시험 문제 ppppppppppppppppppp
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
	// 0~1000 7과 19의 공배수
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
	// 0~100,000 끝자리8, 8의 배수
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
	// 0~100,000 끝자리8, 8의 배수의 개수
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

// Nested 반복문
// 	반복문안에 포함된 다른 반복문이 있는 형태
#if 0
int main() {
	// 구구단을 2단부터 9단까지 출력
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
	// 구구단 2단~9단 중 홀수단 만을 출력
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
	// 구구단 2단~9단 중 홀수단 만을 출력 끝자리가 3
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
//  조건을 사용하여 반복을 지정
// For 반복문으로 작성할 수 있는 것은 While 반복문으로도 작성 가능
// 
// while 사용할 때 주의할 점
// 조건 불충족을 위한 부분을 반드시 포함
//  그렇지 않으면, 무한 loop 발생
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
	// 0~1000 3456과 4834의 공약수
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

// 반복문의 break
// 
// 반복문을 수행할 때,
// 계획된 반복횟수를 다 채우지 못했어도(for)
// 반복조건이 만족됨에도 불구하고(while),
// 중단하고 싶을 때, 'break'를 사용
//
// Break의 작동범위
// Break는 자신을 감싼 가장 안 쪽의 반복문만 중단시킨다
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

// 반복문의 continue
// For와 While 반복문 내의 나머지 부분의 실행을 건너뛰고 다음 반복을 진행합니다
// break와 달리 반복문 전체의 수행을 종료하지는 않는다.
#if 0
int main() {
	// 1~100 홀수 continue
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