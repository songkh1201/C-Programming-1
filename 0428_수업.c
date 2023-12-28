#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<math.h>

int i;  // 전역변수 (global variable)

// 전역변수와 지역변수간 이름충돌
// 지역변수가 우선
// 충돌없는 이름 사용 

#if 0
int main() {

	int j;  // 지역변수(local variable)      쓰레기값(garbage value)

	printf("%d", i);
	printf("%d", j);  // 오류 (출력 X)

	return 0;
}
#endif

// 지역변수와 static
// 지역변수 앞에 static 지정
// 함수 종료 후에도 계속적으로 이전 값 유지

#if 0
int foo() {
	int i = 0;
	i++;
	return i;
}
int bar() {
	static int i = 0;  // 함수가 최초에 호출될 때만 실행
	i++;    // 두번째 실행할 때부터는 여기서부터 실행
	return i;
}
int main() {

	int k = foo();
	k = foo();

	printf("%d\n", k);

	int m = bar();
	m = bar();

	printf("%d\n", m);

	return 0;
}
#endif

// 전역변수와 extern
// 
// local - static
// glocal - extern
// 
// 다른 source code에서 전역변수 공유 사용 가능 

// 함수와 extern
// 다른 source code에서 함수 공유 사용 가능



// static 전역변수          <->  static 지역변수와 다른 의미
// 외부 파일에서 참조가 불가능한 전역변수
// extern 사용으로 참조 불가능 


// 변수 지정자
//
// auto 
//	함수, 블록 종료와 함께 소멸
//	붙이지 않아도 동일
// register
//  변수를 register (CPU내부)에 할당
//  속도 증가 효과 있으나, 사용하지 않는 것을 추천
//  CPU내의 register는 소중한 자원이므로, 함부로 사용하지 말아야
// volatile
//  cache 사용없이 메모리에서 변수값을 CPU로 loading
//  속도 저하 문제 발생
//  임베디드 프로그래밍에서 디바이스와 변수 공유할 때 필요


// Recursion, 순환호출
// 함수가 자기 자신을 호출
// 예제
//  합구하기
//  factorial 계산
// Recursion 함수의 구조
//  반드시, 탈출 조건
//  스스로 호출하는 부분에서는 argument 주의
#if 1
int fact(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}
int main() {
	int k = 5;

	printf("%d", fact(k));

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

#if 0
int main() {


	return 0;
}

#if 0
int main() {


	return 0;
}
#endif
#endif
#endif