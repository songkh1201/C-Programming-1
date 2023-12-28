#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 포인터 활용

// 복습
#if 0
int main() {

	int i = 10;

	int* pi = &i;

	// dereferencing. 간접참조
	*pi = 3000;  // 쓰기

	inr k;
	k = *pi;  // 읽기

	return 0;
}
#endif


// 포인터 활용

// 이중 포인터
//
// 영어 명칭
//		pointer to pointer
//		double pointer
// int** q 해석
//		q 변수 이름
//		*q : q가 포인터 변수
//		int* : 주소에 가보면 포인터 형
#if 0
int main() {

	int i = 100;
	int* p = &i;
	int** q = &p; // 이중포인터 q

	return 0;
}
#endif

// 이중포인터 예제
//
// 이중포인터를 이용한
// dereferencing
// 
// Dereferencing target
//		*q : p의 위치
//		**q: i의 저장 위치
#if 0
int main() {
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	// 포인터 p를 이용한 i 수정
	printf("i=%d\n", i); // 200 출력

	**q = 300;
	// 이중포인터 q를 이용한 i 수정
	printf("i=%d\n", i); // 300 출력

	return 0;
}
#endif

// 포인터 배열
//
// 배열의 요소가 pointer
// 개별요소가 pointer이므로 dereferencing이 동일하게 적용
#if 0
int main() {

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* ap[5] = { &a, &b, &c, &d, &e };

	for (int i = 0; i < 5; i++) {
		// 배열요소 (pointer)에 대한 dereferencing
		printf("%d\n", *ap[i]);
	}
	return 0;
}
#endif

// 2차원 문자열 배열
// 
// 짧은 문자열의 경우
// 낭비되는 공간이 발생
// 
// 장점: 문자열 별로이 가능
#if 0
int main() {

	char fname[6][11] = {
		"APPLE",
		"BANANA",
		"CHERRY",
		"POMEGRANTE",
		"PEPPER",
		"ONION"
	}

	return 0;
}
#endif

// 문자형 포인터 배열
//
// 배열요소별로 길이 차이
// 
// 별칭
//		ragged array : 너덜너덜
//		jagged array : 들쑥날쑥
// 
// 단점: 문자열 수정불가
//		상수 문자열
//		별도로 문자열 공간 
//		할당받은 것이 아님
#if 0
int main() {
	char* gname[4] = {
	"apple",
	"blueberry",
	"orange",
	"melon"
	};

	for (int i = 0; i < 4; i++) {
		printf("%c\n", *gname[i]);
	}
	return 0;
}

#endif

// 함수 포인터
//
// 함수를 가리키는 포인터
// 
// int (*op) (int, int)
//		*op: op는 pointer
//		int (*op) (int, int)
//			int 2개를 인수로 받고,
//			int를 반환하는 함수를
//			포인팅
// 
// Pointer operation을 사용하여, 함수 add, multipy 선택 사용
#if 0
int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}

int main() {
	int (*operation)(int, int); // 함수 포인터 선언

	operation = add; // 더하기 함수를 가리키도록 포인터에 대입
	int result = operation(2, 3); // 함수 포인터로 함수 호출
	printf("Addition: %d\n", result);

	operation = multiply; // 곱하기 함수를 가리키도록 포인터에 대입
	result = operation(2, 3); // 함수 포인터로 함수 호출
	printf("Multiplication: %d\n", result);

	return 0;
}
#endif

// 함수 인수로서의 함수 포인터
// 
// 함수 countElements는 세번째 인수로 함수포인터를 사용
// 
// countElements(..,..,isEven)
//		배열요소 중 짝수만 고려
// 
// countElements(..,..,isPositive)
//		배열요소 중 양수만 고려
#if 0
int countElements(int arr[], int size, int (*condition)(int)) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (condition(arr[i])) {
			count++;
		}
	}
	return count;
}

int isEven(int num) {
	return num % 2 == 0;
}

int isPositive(int num) {
	return num > 0;
}

int main() {
	int numbers[] = { 1, 2, 3, 4, 5 };

	int size = sizeof(numbers) / sizeof(numbers[0]);

	int evenCount = countElements(numbers, size, isEven);
	printf("Number of even elements: %d\n", evenCount);

	int positiveCount = countElements(numbers, size, isPositive);
	printf("Number of positive elements: %d\n", positiveCount);

	return 0;
}
#endif

// 다차원 배열과 주소
//
// 2차원 배열
// arr[0], ... , a[3]은 각 행의 시작 주소
// &arr[0][0]: 0행의 시작주소
#if 0
int main() {
	int arr[][3] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9},
					{10, 11, 12} };
	int rows = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < rows; i++) {
		printf("Row %d: %p\n", i, arr[i]);
	}

	for (int i = 0; i < rows; i++) {
		printf("Row %d: %p\n", i, &arr[i][0]);
	}

	return 0;
}
#endif

// const 포인터
// 
// 2가지 타입이 가능
// const char *p
//		포인터 p를 이용해서, p가 가리키는 위치에 들어있는 값 면경 불가
// char* const p
//		포인터 p에 저장되는 값 변경 불가

// const char *포인터
// 
// 포인터 ptr은 const
// ptr의 dereferencing을 통해서 값을 변경시킬 수 없음
#if 0
int main() {
	int num = 42;
	const int* ptr = &num; // const 포인터 선언

	printf("Value: %d\n", *ptr); // 포인터를 통한 값 출력

	// *ptr = 10; // 오류: const 포인터로 값을 변경할 수 없음
	return 0;
}
#endif

// char* const 포인터
//
// 포인터 ptr이 저장하는 주소를 바꿀 수 없다
// 하지만, ptr이 가리키는 위치에 가서 값을 바꿀 수는 있다
#if 0
int main() {
	int num = 42;
	int num2 = 100;
	int* const ptr = &num; // const 포인터 선언

	printf("Before: %d\n", *ptr);

	*ptr = 10; // ptr이 가리키는 위치에 가서 값을 바꿀 수는 있지만,

	ptr = &num2; // 오류. ptr에 저장된 주소를 바꿀 수 없다.
	printf("After: %d\n", *ptr);

	return 0;
}
#endif

// volatile 키워드
//
// 키워드 volatile을 변수나 포인터 앞에 사용
// 사용 예
//		volatile int a;
//		volatile int* b;
// Caching된 값을 사용하지 말고, 메모리에서 로딩
//		메모리와 CPU 속도 차이 보완위해 중간에 cache 사용
//		cache 사용 회피: 속도 저하 문제 발생하나, 안정적 동작
//		꼭 필요한 경우에만 사용

// void 형의 포인터
// 
// 순수하게 메모리의 주소만을 가지는 변수
// void *p
// 장점: 모든 데이터형의 포인터로 사용 가능

// main 함수의 인수
// 
// main 함수의 두 번째 형태
//		2개의 함수 인수
// int argc
//		argument count
//		인수의 개수
// char *argv[]
//		argument variables
//		문자열 포인터
//		argc 개수와 동일
// 실행파일에 인수 지정
//		VS에서는 project property
//		명령행에서는 실행파일 이름 뒤에 직접 입력
//			예: a.out hello world
#if 0
int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		printf("%d %s\n", i, argv[i]);
	}
	return 0;
}
#endif

// 동적 메모리 할당과 해제

// 동적 메모리 할당
// 
// 메모리 할당방식
//		정적 메모리: 프로그램 시작 전에 결정
//		동적 메모리: 실행도중 메모리를 할당
// 정적 메모리 할당의 예
//		int a;
//		float b[100];
// 정적메모리 방식의 단점
//		할당된 메모리 크기 변경 불가

// 동적 메모리 사용 절차
//
// stdlib.h
//		standard library header
//		함수 malloc과 free
// 함수 malloc
//		memory allocation
//		인수: 할당 크기 (bytes)
//		반환값: 메모리 주소
// 함수 free
//		할당받은 메모리 반환
//		인수: 메모리 주소
#if 0
#include<stdlib.h>

int main() {
	int size;
	int* arr;

	printf("Enter the size of the array:");
	scanf("%d", &size);

	// 동적 메모리 할당
	arr = (int*)malloc(size * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	printf("Enter %d integers:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Entered integers are:");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}

	// 동적 메모리 해제
	free(arr);
	return 0;
}
#endif

// calloc
//
// malloc과 유사
// calloc
//		clear allocation
// 차이점
//		할당받은 메모리가 0으로 초기화
// 인수 설명
//		첫 번째: 개수
//		두 번째: 개별 크기
// calloc(5, sizeif(int))
//		5개 * 4 bytes = 20 bytes
#if 0
#include<stdlib.h>

int main() {
	int* arr;

	arr = (int*)calloc(5, sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	free(arr);

	return 0;
}
#endif

// realloc
//
// malloc으로 할당받았던 메모리 크기 조정
// 동작원리
//		기존 메모리 반환
//		새로운 크기 메모리 재할당
//		위 2단계를 1번에 실행
// 인수 설명
//		첫 번째: 기존 메모리 시작 주소
//		두 번째: 신규 할당 크기
#if 0
#include<stdlib.h>

int main() {
	int* arr;
	int size;
	printf("Enter the initial size od the array: ");
	scanf("%d", &size);

	// 초기 크기로 메모리 할당
	arr = (int*)malloc(size * sizeof(int));

	int newSize;
	printf("\nEnter the new size of the array: ");
	scanf("%d", &newSize);

	// 메모리 크기 조정
	arr = (int*)realloc(arr, newSize * sizeof(int));

	if (arr == NULL) {
		printf("Memory reallocation failed.\n");
		return 1;
	}

	free(arr);

	return 0;
}
#endif

// 구조체 동적 생성
// 
// 구조체 저장을 위한 동적 메모리 할당과 해제
#if 0
#include<stdlib.h>

typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	Person* person;

	person = (Person*)malloc(sizeof(Person));

	if (person == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	person->id = 100;

	printf("ID: %d\n", person->id);
	free(person);

	return 0;
}

#endif

// 파일 입출력
//
// 파일의 종류
//		텍스트 파일 (text file)
//			ASCII 코드값으로 저장
//			숫자 '0'을 저장할 때, '0'의 ASCII 코드값인 48을 파일에 기록
//			ASCII 코드는화면상에 표시가 가능하기 때문에, 파일을 열어서 볼 수 있다.
//			메모장으로 작성하는 .txt 확장자 파일
//		이진 파일 (binary file)
//			값을 그대로 저장
//			ASCII 코드 값이 아니기 때문에 알 수 없는 형태로 출력
//			사용하는 대부분의 파일들이 binary
//				avi, mp3, mp4, hwp, pdf 등

// 파일 입출력 단계
//
// 1. 파일을 연다. open
// 2. 파일내용 읽거나(read) 쓴다(write).
// 3. 파일을 닫는다. close

// 텍스트 파일 쓰기 예제
//
// FILE*
//		파일포인터형
//		C언어 제공
// 함수 fopen
//		함수 이름과 모드
//		"w": 쓰기용
//		"a": 이어쓰기
//		반환값: 파일포인터
// 함수 fprintf
//		파일 내에 기록
//		printf와 유사 방식 동작
// 함수 fclose
//		저장내용 보관
#if 0
int main() {
	FILE* file;
	char data[100] = "hello";

	file = fopen("example.txt", "w");

	if (file == NULL) {
		printf("File creation failed.\n");
		return 1;
	}

	fprintf(file, "%s", data);

	fclose(file);

	return 0;
}
#endif

// 텍스트 파일 읽기 예제
//
// 함수 fopen
//		함수 이름과 모드
//		"r": 읽기용
//		반환값: 파일포인터
// 함수 fscanf
//		파일로부터 읽기
//		scanf와 유사 방식 동작
// 함수 fclose
//		저장내용 보관
#if 0
int main() {
	FILE* file;
	char data[100];

	file = fopen("example.txt", "r");

	fscanf(file, "%s", data);

	printf("%s\n", data);

	fclose(file);
	return 0;
}
#endif

// 이진 파일 쓰기 예제
//
// 구조체 내용을 이진 파일에 기록
// 함수 fopen
//		"wb": 쓰기 ,이진파일
// 함수 fwrite
//		fprintf: 텍스트파일용
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;
	person.id = 100;
	person.age = 20;
	strcpy(person.name, "John");

	file = fopen("example.bin", "wb");

	if (file == NULL) {
		printf("File creation failed.\n");
		return 1;
	}

	fwrite(&person, sizeof(Person), 1, file);

	fclose(file);
	return 0;
}
#endif

// 이진 파일 읽기 예제
//
// 파일로부터 구조체 내용을 복원
// 함수 fopen
//		"rb": 읽기, 이진파일
// 함수 fread
//		&person: 파일 읽은 내용을 저장할 주소
//		sizeof(Person): 읽을 크기
//		1: 개수
//		file: 파일 포인터
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;

	file = fopen("example.bin", "rb");

	fread(&person, sizeof(Person), 1, file);

	printf("%d %s %d\n", person.id, person.name, person.age);

	fclose(file);
	return 0;
}
#endif

// 파일 포인터의 이동
//
// 함수 fseek을 이용한 파일 포인터 위치 조정
//		원하는 위치에 읽기와 쓰기가 가능
// 위치기준
//		SEEK_SET: 파일 처음
//		SEEK_CUR: 현재
//		SEEK_END: 파일 끝
#if 0
#include<string.h>
typedef struct {
	int id;
	char name[20];
	int age;
} Person;

int main() {
	FILE* file;
	Person person;
	person.id = 100;
	person.age = 20;
	strcpy(person.name, "John");

	file = fopen("example.bin", "wb");

	fwrite(&person, sizeof(Person), 1, file);

	person.id = 200;
	person.age = 30;
	strcpy(person.name, "Tom");
	fwrite(&person, sizeof(Person), 1, file);

	person.id = 300;
	person.age = 25;
	strcpy(person.name, "Amy");
	fwrite(&person, sizeof(Person), 1, file);

	fclose(file);

	file = fopen("example.bin", "rb");
	// 파일 처음에서 구조체 1개 skip
	fseek(file, sizeof(Person), SEEK_SET);
	fread(&person, sizeof(Person), 1, file);
	// 두 번째 사람이름인 Tom 출력
	printf("%s\n", person.name);

	return 0;
}
#endif

// 파일 포인터 관련 함수
//
// 함수 rewind
//		함수 포인터를 맨 앞으로 이동
// 함수 ftell
//		함수 포인터의 현재 위치를 값으로 전환
// 함수 feof
//		현재 포인터가 파일 끝인지를 체크
// 예제사용되는 example.txt 파일의 위치
//		VS: 프로젝트 파일 폴더
#if 0
int main() {
	FILE* file;
	char character;
	long position;
	int eofStatus;

	// example.txt 파일에 "hello"를 저장한 후 실행
	file = fopen("example.txt", "r");

	if (file == NULL) {
		printf("File open failed.\n");
		return 1;
	}

	// 파일의 처음으로 이동
	rewind(file);

	// 파일에서 문자 하나 읽기
	character = fgetc(file);
	printf("Character: %c\n", character);

	// 현재 파일 포인터 위치 가져오기
	position = ftell(file);
	printf("Current Position: %ld\n", position);

	// 파일의 끝에 도달 여부 확인
	eofStatus = feof(file);
	printf("End of File: %s\n", eofStatus ? "True" : "False");

	fclose(file);
	return 0;
}
#endif

// Recap: 파일 입출력 함수 정리
//
// 텍스트 파일
//		문자 단위: fgetc, fputc
//		문자열 단위: fgets, fputs
//		서식화된 문자열 단위: fscanf, fprintf
// 이진파일
//		fread
//		fwrite
#if 0

int main() {
	int a = 10;
	char c = 'h';
	void* p = &c;
	printf("%c", *(char*)p);

	return 0;
}
#endif

