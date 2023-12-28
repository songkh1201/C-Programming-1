
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {

	//사용할 변수를 선언
	int x1 = 0;
	int x2 = 0;

	int mul = 0;

	printf("첫 번째 숫자를 입력하세요:");
	scanf("%d", &x1);

	printf("두 번째 숫자를 입력하세요:");
	scanf("%d", &x2);

	//계산
	mul = x1 * x2;

	printf("곱한 값은 %d입니다.", mul);

	return 0;
}
#endif

// 교재 programing 예제


#if 0


int main() {

	float a = 0;
	float a = 0;
	float a = 0;

	printf("첫 번째 수를 입력하세요:");
	scanf("%f", &a);

	printf("두 번째 수를 입력하세요:");
	scanf("%f", &b);

	printf("세 번째 수를 입력하세요:");
	scanf("%f", &c);

	float sum = 0;
	sum = a + b + c;

	float avg = 0;
	avg = sum / 3;

	printf("합은 %f이고 평균은 %f입니다.", sum, avg);


	return 0;
}
#endif


#if 0

// 화씨온도를 입력받아서 섭씨온도로 변환하는 프로그램

int main() {

	float f = 0;

	printf("화씨 값을 입력하시요:");
	scanf("%f", &f);

	// 계산식

	float c = 0;
	c = (5.0 / 9.0) * (f - 32);

	printf("섭씨 값은 %f 입니다.", c);

	return 0;
}
#endif

#include<math.h>
#if 0

// 다항식 3x^2 + 7x + 11, x는 사용자로부터 입력받는다.

int main() {

	float x = 0;

	printf("실수를 임력하세요:");
	scanf("%f", &x);

	float result = 0;

	result = 3 * (x * x) + 7 * x + 11;
	printf("1 ==== 다항식의 값은 %f\n", result);


	float result2 = 0;
	float x_2 = pow(x, 2);
	result2 = 3 * x_2 + 7 * x + 11;
	printf("2 ==== 다항식의 값은 %f\n", result2);

	return 0;
}

#endif


#if 0

// 두 개의 숫자를 입력받아 첫 번째 숫자에서 두 번째 숫자를 뺀 값을 출력

int main() {

	int val1 = 0;
	int val2 = 0;

	scanf("%d %d", &val1, &val2);

	int result = 0;
	result = val1 - val2;

	printf("%d", result);

	return 0;
}

#endif

#if 0

// 세 개의 숫자를 입력받아 각각을 2로 나눈 나머지를 순서대로 출력

int main() {

	int x1 = 0;
	int x2 = 0;
	int x3 = 0;

	scanf("%d %d %d", &x1, &x2, &x3);

	int result1 = 0;
	int result2 = 0;
	int result3 = 0;

	result1 = x1 % 2;
	result2 = x2 % 2;
	result3 = x3 % 2;

	printf("%d %d %d", result1, result2, result3);

	return 0;
}

#endif

#if 0

// 입력되는 2개의 정수 중 큰 수를 출력하시오.
//두 숫자가 같은 경우는 없다.

int main() {

	//입력받을 정수 2개
	int val1 = 0;
	int val2 = 0;

	//사용자로부터 정수 입력 받기
	scanf("%d %d", &val1, &val2);

	//if 조건문

	int max = 0;

	if (val1 > val2) {
		max = val1;
	}
	else {
		max = val2;
	}

	printf("%d", max);

	return 0;
}

#endif

#if 0

//입력 정수 1개에 대해서,
//양수거나 0이면 그대로 출력하고,
//음수면 절대값을 취해 양수로 변환하여 출력하시오.

int main() {

	int a = 0;
	int b = 0;

	scanf("%d", &a);

	if (a < 0) {
		b = -a;
	}
	else {
		b = a;
	}

	printf("%d", b);

	return 0;
}

#endif

#if 1

//정수 입력 2개에 대해
//첫 번째 숫자를 두 번째 숫자로 나누었으면,
//나머지가 0이면 ok를 출력,
//아니면 nok를 출력.
//(주의!!출력은 모두 소문자, 끝에 줄바꿈 표시하지 마세요)

int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	if (0 == (a % b)) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}


#endif