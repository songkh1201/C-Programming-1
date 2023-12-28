#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 포인터
//	데이터형 (data type) 중의 하나
//		int float 등과 동급
//	포인터형의 변수: a variable of pointer type
//		int형의 변수
//		float형의 변수
// 포인터 변수 == 포인터 데이터형 변수
// 포인터 변수가 저장하는 것은 '주소' 
//	주소 : 데이터가 저장된 위치

// 주소연산자
//	변수가 위치한 곳의 시작주소를 반환하는 연산자
//	변수이름 앞에 붙여서 사용: &a
#if 0
int main() {
	int a = 10;
	char b = 20;
	float c = 30;

	// %p는 주소를 16진수로 출력
	printf("%p\n%p\n%p", &a, &b, &c);

	return 0;
}
#endif

// 포인터형의 변수 선언 (포인터변수==포인터 선언)
//	data-type * 변수이름
//  예) int* a
// 포인터에 data type (int, char…)을 붙이는 이유
//
// -포인터 변수를 이용하여 주소위치에 read / write
//
// - data type은 read / write하는 단위
//
// 예) int* a;   포인터변수 a를 이용하면 4 bytes(int)
//               단위로 read / write가 가능

#if 0
int main() {
	int* a;
	char* b;
	float* c;
	double* d;
	short* e;

	return 0;
}
#endif

#if 0
int main() {
	// 주소 1000번지를 저장
	// (int *)는 숫자 1000을 주소 1000으로 변경
	int* a = (int*)1000;

	// 포인터 변수 pd에 저장되어 있는 주소는
	// int 변수 b의 주소
	int b = 20;
	int* pd = &b;

	// 일반적인 포인터 변수 초기화
	// 0번지는 invalid address로,
	// 포인터 변수에 유효한 주소가 저장되지 않았음을 의미
	char* pc = 0;

	// NULL == 0
	float* pf = NULL;

	return 0;
}
#endif

// 간접참조 연산자 *: dereferencing operator
// 포인터변수의 dereferencing 이란 ?
//
//	포인터 변수에 저장되어 있는 주소에 대해서 read / write하는 행위
//
//	예를 들어, 포인터 변수에 1000이 저장되어 있다면,
//	dereferencing은 주소 1000번지에 read / write하는 것이다.
//
//	int a = 10; // 변수 a가 1000번지에 있다고 하자
//	int* pa = &a;  // 포인터 변수 pa는 1000을 저장한다.
//
//	이제 pa에 저장된 값(주소 1000)을 이용해서 1000번지(변수 a의 위치)에
//	read / write 할 수 있다.
//
//	이러한 행위를 dereferencing,
//
//	그리고 여기에 사용되는 dereferencing operator *
//
//	** dereferencing operator *는 포인터 변수 앞에 붙여서 사용
//
//	상황에 따라 read / write 모두 가능
#if 0
int main() {
	int a = 10;
	int* pa = &a;

	printf("변수 a가 담고있는 값: %d\n", a);
	printf("변수 a의 메모리상의 위치: %p\n", &a);
	printf("포인터변수 pa가 담고있는 값: %p\n", pa);

	// 포인터변수도 변수이므로, 값을 저장하기 위해서
	// 메모리에 자지 공간 (위치, 주소)를 가지고 있어야 한다.
	printf("포인터변수 pa의 메모리상의 위치: %p\n", &pa);

	// 이제 포인터변수 pa와 dereferencing operator *을 이용해서
	// pa가 저장하고 있는 변수 a의 주소에 대해서
	// read와 write가 가능

	// dereferencing pa for read
	printf("%d\n", *pa);  // 여기서 *는 read

	// dereferencing pa for write
	*pa = 555;  // 여기서 *는 write

	// 변수 a값이 변경되어 있다.
	printf("dereferencing이후의 a값: %d\n", a);
	return 0;
}
#endif

// 잠깐 정리: &와 *
/*
&
address operator
변수의 주소를 반환
변수 앞에 붙인다 : &a
포인터 변수 앞에 붙이면, 포인터 변수의 메모리 상의 위치
*/

/*
*
dereferencing operator
포인터 변수 앞에 붙인다.
포인터 변수가 가지고 있는 값(주소, 위치)에 대해서 read/write
상황에 따라 read 또는 write
*/


// 포인터 변수 사용시 주의점
//
// 초기화하지 않고 사용하기
//		포인터 변수를 초기화하지 않으면, garbage value
//		dereferencing하게 되면, garbage value를 주소로 인식해서 그곳에 read / write
//
// NULL(== 0) 값을 가지는 포인터 변수 사용
//		int* pa = 0;
//		주소 0번지는 invalid address : 좀 더 정확히는 접근금지 구역
//		만약 이곳을 dereferencing하면 program error 발생
//		NULL은 포인터변수의 값이 유효한지 판단하는 기준으로 사용
//
// 포인터 타입과 변수 타입은 가급적 일치
//		int a;
//		double* pa = &a;
//
//		변수 a가 차지한 공간은 4 byte인데,
//		포인터 변수 pa를 이용해서 dereferencing하는 것은 double = 8bytes
//		따라서, 예약하지 않은 공간을 사용해서 남에게 피해를 줄 수 있다.
//		** 그렇지만, 이를 제지하지 않기에, 개발자의 전적인 책임


// 포인터 연산
//  포인터 변수의 연산은 덧셈과 뺄셈이 가능
//  덧셈과 뺄셈할 때, 그 증가 / 감소분은 포인터 데이터형에 따라 달라짐
#if 0
int main() {
	char* a = (char*)10000;
	short* b = (short*)10000;
	int* c = (int*)10000;
	double* d = (double*)10000;

	// %u는 10진수로 주소를 출력한다. (%p는 16진수로 주소를 출력한다.)
	printf(" a: %u\n b: %u\n c: %u\n d: %u\n\n", a, b, c, d);

	a++;  // char = 1 byte이므로, 증분단위는 1
	b++;  // short = 2 byte이므로, 증분단위는 2
	c++;  // int = 4 byte이므로, 증분단위는 4
	d++;  // double = 8 byte이므로, 증분단위는 8

	printf("1씩 증가시킨 이후\n\n");
	printf(" a: %u\n b: %u\n c: %u\n d: %u\n\n", a, b, c, d);
	return 0;
}
#endif

#if 0
int main() {

	int a = 3000;
	int* pa = &a;

	printf("pa: %u\n", pa);

	// dereferencing으로 *pa로 read 후에,
	// pa값을 증가 ( +4)

	int k = *pa++;
	// 차라리, 다음과 같이 하는 편이 낫다
	// int k = *pa
	// pa++

	printf("k: %d\n", k);
	printf("pa: %u\n", pa);

	return 0;
}
#endif

#if 0
int main() {

	int a = 3000;
	int* pa = &a;

	printf("a: %d\n", a);

	// dedreferecing으로 값을 가져와서(read)
	// 그 값을 1만큼 증가시켜서, 다시 write
	(*pa)++;
	//
	//차라리
	// int temp = *pa;  // read
	// temp++;
	// *pa = temp;      // write

	printf("a: %d\n", a);

	return 0;
}
#endif

#if 0
int main() {

	double d = 1000;

	// pa를 이용해서는 8바이트씩 read/write
	double* pa = &d;

	// pi에 pa값을 넣을 떄 형변환
	// pi와 pa 모두 포인터 변수지만, 서로 read/write단위가 4바이트와 8바이트로 달라서
	// 형변환해줘야 한다.
	//
	// pi를 이용해서는 4바이트씩 read/write
	int* pi = (int*)pa;

	return 0;
}
#endif

// 포인터와 함수 parameter: call by value
// call-by-value: 함수 parameter를 넘길 때 값의 복사본이 전달
//		함수 내에서 값이 바뀌어도, 원본은 상관없음
#if 0
void foo(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {

	int k1 = 10;
	int k2 = 20;

	printf("k1: %d		k2: %d\n", k1, k2);
	foo(k1, k2);
	printf("After calling foo\n");
	printf("k1: %d		k2: %d\n", k1, k2);

	return 0;
}
#endif

// 포인터와 함수 parameter: call by reference
// call-by-reference: 함수 parameter를 넘길 때 원본 값의 주소가 전달
//		함수 내에서 원본의 주소를 이용해서 값을 바꾸면, 원본도 바뀜
#if 0
void foo(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int k1 = 10;
	int k2 = 20;

	printf("k1: %d		k2: %d\n", k1, k2);
	foo(&k1, &k2);
	printf("After calling foo\n");
	printf("k1: %d		k2: %d\n", k1, k2);

	return 0;
}
#endif

// scanf와 address operator
//  scanf 함수는 값이 저장될 곳의 주소를 인자로 받아야 함.
//  이를 위해, 변수 앞에& (address operator)를 붙였음.



// 주소를 반환하기 때문에 함수반환값으로
// 포인터형을 사용
#if 0
int* foo(int k) {

	int result = k;

	result = result * 10;

	// 함수가 종료되면,
	// local variable result가 사라지게 되므로,
	// 주소값이 의미가 없음
	return &result;
}
int main() {

	int a = 20;

	// 반환되는 주소를 p에 저장했지만,
	// 그 주소에 있던 local variable result는 함수 종료와 함께 소멸
	// 그 주소를 가볼 수는 있지만, 유효한 값이 있을지는 장담못함.
	int* p = foo(a);

	return 0;
}
#endif

// 포인터와 배열
// 배열의 이름은 포인터 변수
// int a[10];
// 이 경우, 배열이름 a는 포인터 변수,
// a에는 배열의 시작주소가 들어 있음.
// a의 데이터형은 int* (int 단위로 read / write하는 포인터 변수)
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	// a는 int* 타입이므로, 4바이트씩 읽는다.
	printf("%d\n", *a);        // a[0]

	printf("%d\n", *(a + 1));  // 포인터 덧셈연산에 의한 a[1] access

	printf("%d\n", *(a + 4));  // a[4]

	return 0;
}
#endif


// 배열의 이름은 포인터 변수이긴 하지만, 
// const이기 때문에, 값을 변경시킬 수는 없고,
// a + 1 과 같이, offset방법으로 배열 요소를 read / write 가능
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	// 배열 이름 a는 포인터 변수인데,
	// constant (read-only)이므로 a에 저장된 값 자체를 바꿀 수는 없음.
	a++;

	return 0;
}
#endif


// 포인터를 배열이름처럼 사용
#if 0
int main() {

	int a[5] = { 1,2,3,4,5 };

	int* p = a;
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// 포인터변수 p를 마치 배열이름처럼 사용
	// indexing이 가능하다.
	p[0] = p[0] * 2;
	p[4] = p[4] * 2;

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
#endif



// 배열을 함수매개변수로 전달
#if 1
// 배열이 함수 parameter로 전달될 때는 call-by-reference
//			원본이 전달
//
// 함수 parameter로서의 배열은 2가지 방법 가능
//			배열로 전달 : 함수 foo
//			포인터 변수로 전달 : 함수 bar
//
// 배열은 포인터와 혼용되어 많이 사용된다.
//
// 배열은 크기가 클 수도 있기 때문에 원본의 시작주소를 넘긴다!!!
//			배열이 call - by - reference가 된 이유
void foo(int k[]) {
	k[0] = k[0] * 2;
	k[4] = k[4] * 2;
	return;
}
void bar(int* k) {
	k[1] = k[1] * 2;
	*(k + 3) = *(k + 3) * 2;  // 포인터 연산을 이용
	return;
}
int main() {

	int a[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	foo(a);
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	bar(a);
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
#endif

// 포인터 사용의 장점
// 포인터 사용이 어렵긴 하지만, 
// 다음과 같은 장점 때문에 사용
//
// 다양한 자료저장 형태 표현 가능
//
// 하드웨어를 메모리에 mapping후 제어 가능 : embedded programming
//
// call - by - reference 호출 : 원본 전달로 함수 호출 효율성 증가
//
// 동적 메모리 할당
//		필요한 만큼 할당,
//		사용 후 해제
//		* 배열은 정적할당


#if 0
int main() {


	return 0;
}
#endif
