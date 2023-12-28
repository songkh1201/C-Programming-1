
//1부터 5까지 숫자들의 합, 곱을 한 줄에 출력하시오. 두 결과 사이에는 한 개의 공백만 존재한다.

#include<stdio.h>

int main(void) {


	int result1;
	result1 = 1 + 2 + 3 + 4 + 5;

	int result2;
	result2 = 1 * 2 * 3 * 4 * 5;

	printf("%d %d", result1, result2);  //괄호가 있으면 함수 main, printf (노란색)   //d는 10진수  //""는 1개만

	return 0;
}